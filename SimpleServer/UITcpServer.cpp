#include "UITcpServer.h"
#include "QMessageBox.h"
#include "SocketThread.h"

// constructor
UITcpServer::UITcpServer(QWidget * parent): 
                          QTcpServer(parent), totalConnectedClients(0) {
}

// attempts to start server
bool UITcpServer::startServer(const QHostAddress& address, unsigned short port) {
  if(!listen(address, port)) {
    QMessageBox::information(nullptr, tr("Server Start Error"), errorString());
    return false;
  }

  return true;
}

// receives an incoming connection
// start socket on a new thread
void UITcpServer::incomingConnection(int socketDescriptor) {
  auto thread = new SocketThread(socketDescriptor, this);

  // notifies gui on clients
  updateConnectedClients(++totalConnectedClients);

  // handle socket errors
  QObject::connect(thread, SIGNAL(sockError(int)), 
    this, SLOT(sockErrorHandler(int)), 
    Qt::QueuedConnection);

  // ensure proper destruction of thread
  QObject::connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));

  // notify on client disconnection
  QObject::connect(thread, SIGNAL(finished()), this, 
    SLOT(clientDisconnected()), 
    Qt::QueuedConnection);

  thread->start();
}

// socket error handling
void UITcpServer::sockErrorHandler(int socketError) {
  // we don't care about the exact error
  // this could potentially spam by many clients
  QMessageBox::information(nullptr, tr("Socket Error"), 
    tr("Socket Error Enum ") + QString::number(socketError));
}

// notifies gui on total number of connected clients
// qt should serialize calls from many threads to this due to queued connection
void UITcpServer::clientDisconnected(void) {

  // this should never happen but lets not overflow size_t
  if(totalConnectedClients == 0) {
    return;
  }

  updateConnectedClients(--totalConnectedClients);
}