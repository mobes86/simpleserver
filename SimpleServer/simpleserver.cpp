#include "simpleserver.h"

static const QString serverStarted = "Started";
static const QString serverStopped = "Stopped";
static const QStringList portValues = {"5000", "6000", "10000"};
static const QString noClients = "0";

static const size_t zeroClients = 0;

// constructor
SimpleServer::SimpleServer(QWidget *parent): QMainWindow(parent) {
  ui.setupUi(this);

  // add default gui values
  ui.portComboBox->addItems(portValues);
  resetServerUIElements();

  // connect signals
	QObject::connect(ui.startServerPushButton, SIGNAL(clicked()), 
    this, SLOT(startServer()));

  QObject::connect(ui.stopServerPushButton, SIGNAL(clicked()), 
    this, SLOT(stopServer()));

  QObject::connect(&socketServer, SIGNAL(updateConnectedClients(size_t)), 
    this, SLOT(clientsConnectedUpdate(size_t)));
}

// starts tcp server
void SimpleServer::startServer(void) {
  // don't allow the user to start a server that is already running
  if(socketServer.isListening()) {
    return;
  }

  // cleans the ui before server state change
  resetServerUIElements();

  // attempts to start the server on said port
  if(socketServer.startServer(QHostAddress::Any, 
    ui.portComboBox->currentText().toInt())) {
    ui.serverStatusLabel->setText(serverStarted);
  }
}

// resets elements to state before server starts
void SimpleServer::resetServerUIElements(void) {
  ui.clientsConnectedLabel->setText(noClients);
  ui.serverStatusLabel->setText(serverStopped);
  clientsConnectedUpdate(zeroClients);
}

// stops server
void SimpleServer::stopServer(void) {
  // current sockets will still be active
  socketServer.close();

  resetServerUIElements();
}

// slot to update current number of total clients
void SimpleServer::clientsConnectedUpdate(size_t totalConnectedClients) {
  ui.clientsConnectedLabel->setText(QString::number(totalConnectedClients));
}