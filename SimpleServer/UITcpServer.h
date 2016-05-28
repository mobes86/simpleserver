#ifndef _UITCPSERVER_
#define _UITCPSERVER_
#include "QTcpServer.h"
#include "QHostAddress.h"
#include <string>
#include <memory>

using namespace std;

class UITcpServer: public QTcpServer {
  Q_OBJECT

  public:
    UITcpServer(QWidget * parent = 0);
    virtual ~UITcpServer(void) = default;
    bool startServer(const QHostAddress& address, unsigned short port);

  public slots:
    void sockErrorHandler(int socketError);
    void clientDisconnected(void);

  signals:
    void updateConnectedClients(size_t num);

  protected:
    void incomingConnection(int socketDescriptor);

  private:
    size_t totalConnectedClients;
};

#endif