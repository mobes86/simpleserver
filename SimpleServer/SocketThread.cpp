#include "SocketThread.h"
#include "assert.h"

// constructor
SocketThread::SocketThread(int socketDescriptor0, QObject *parent): 
                            socketDescriptor(socketDescriptor0), 
                            blockSize(0), 
                            QThread(parent),
                            socket(make_unique<QTcpSocket>()) {
}

// read in socket buffer
// TODO - remove stupid recursion
void SocketThread::readSocketBuffer(void) {
  QDataStream in(socket.get());
  in.setVersion(QDataStream::Qt_5_0);

  // reads the file name
  if(fileNameWithExt.isEmpty()) {
    if(blockSize == 0) {
      if(socket->bytesAvailable() < sizeof(quint64)) {
        return;
      }

      // only will store bytes for quint64
      in >> blockSize;
    }

    // need to wait for more bytes
    if(socket->bytesAvailable() < blockSize) {
      return;
    }

    // read file name
    in >> fileNameWithExt;

    fileHandle = make_unique<QFile>(fileNameWithExt);

    // cannot open disk for writing
    // let's just close the socket for now
    if(!fileHandle->open(QIODevice::WriteOnly)) {
      // for some reason it wants us to close the socket before exiting thread
      socket->close();
      exit(0);
      return;
    }

    blockSize = 0;

    if(socket->bytesAvailable()) {
      readSocketBuffer();
    }
  }
  // reads the file data
  else {
    if(blockSize == 0) {
      if(socket->bytesAvailable() < sizeof(quint64)) {
        return;
      }

      // only will store bytes for quint64
      in >> blockSize;
    }

    // need to wait for more bytes
    if(socket->bytesAvailable() < blockSize) {
      return;
    }

    unique_ptr<char[]> tempBuffer(new char[blockSize]);

    in.readRawData(tempBuffer.get(), blockSize);

    QDataStream diskStream(fileHandle.get());

    // write main payload
    diskStream.writeRawData(tempBuffer.get(), blockSize);
    
    blockSize = 0;

    if(socket->bytesAvailable()) {
      readSocketBuffer();
    }
  }
}

// main looping function
void SocketThread::run() {
  // couldn't set socket so throw error and end thread
  if(!socket->setSocketDescriptor(socketDescriptor)) {
    emit sockError(socket->error());
    return;
  }
   
  // allows the parsing of the socket payload
  QObject::connect(socket.get(), SIGNAL(readyRead()), 
    this, SLOT(readSocketBuffer()), Qt::DirectConnection);

  // ensure when the socket is disconnected it is deleted
  QObject::connect(socket.get(), 
    SIGNAL(disconnected()), this, SLOT(disconnect()));

  // loop on thread
  exec();
}

// client disconnected
void SocketThread::disconnect(void) {
  exit(0);
}

// destructor
SocketThread::~SocketThread(void) {
  socket->close();
  fileCleanup();
}

// closes file
void SocketThread::fileCleanup(void) {
  if(!fileHandle) {
    return;
  }

  fileHandle->close();
  fileHandle.reset();
}