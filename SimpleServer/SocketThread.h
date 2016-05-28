#ifndef _SOCKETTHREAD_
#define _SOCKETTHREAD_
#include "QThread.h"
#include "QTcpSocket.h"
#include <string>
#include <memory>
#include "qfile.h"

using namespace std;

class SocketThread: public QThread {
  Q_OBJECT

  public:
    SocketThread(int socketDescriptor, QObject *parent);
    virtual ~SocketThread(void);
    void run();

  public slots:
    void readSocketBuffer(void);
    void disconnect(void);

  signals:
    void sockError(int socketError);

  private:
    unique_ptr<QTcpSocket> socket;
    quint64 blockSize;
    int socketDescriptor;
    QString fileNameWithExt;

    unique_ptr<QFile> fileHandle;
    void fileCleanup(void);
};

#endif