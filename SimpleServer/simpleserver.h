#ifndef SIMPLESERVER_H
#define SIMPLESERVER_H

#include <QtWidgets/QMainWindow>
#include "ui_simpleserver.h"
#include "UITcpServer.h"

class SimpleServer : public QMainWindow {
  Q_OBJECT

  public:
    SimpleServer(QWidget *parent = 0);
    virtual ~SimpleServer() = default;

  public slots:
    void startServer(void);
    void stopServer(void);
    void clientsConnectedUpdate(size_t totalConnectedClients);

  private:
    Ui::SimpleServerClass ui;
    UITcpServer socketServer;

    void resetServerUIElements(void);
};

#endif // SIMPLESERVER_H
