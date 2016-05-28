/********************************************************************************
** Form generated from reading UI file 'simpleserver.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLESERVER_H
#define UI_SIMPLESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleServerClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *clientsConnectedLabel;
    QLabel *label_2;
    QLabel *serverStatusLabel;
    QLabel *label_3;
    QPushButton *startServerPushButton;
    QPushButton *stopServerPushButton;
    QComboBox *portComboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleServerClass)
    {
        if (SimpleServerClass->objectName().isEmpty())
            SimpleServerClass->setObjectName(QStringLiteral("SimpleServerClass"));
        SimpleServerClass->resize(216, 186);
        centralWidget = new QWidget(SimpleServerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 191, 121));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 171, 89));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        clientsConnectedLabel = new QLabel(layoutWidget);
        clientsConnectedLabel->setObjectName(QStringLiteral("clientsConnectedLabel"));

        gridLayout->addWidget(clientsConnectedLabel, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        serverStatusLabel = new QLabel(layoutWidget);
        serverStatusLabel->setObjectName(QStringLiteral("serverStatusLabel"));

        gridLayout->addWidget(serverStatusLabel, 1, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        startServerPushButton = new QPushButton(layoutWidget);
        startServerPushButton->setObjectName(QStringLiteral("startServerPushButton"));

        gridLayout->addWidget(startServerPushButton, 3, 0, 1, 1);

        stopServerPushButton = new QPushButton(layoutWidget);
        stopServerPushButton->setObjectName(QStringLiteral("stopServerPushButton"));

        gridLayout->addWidget(stopServerPushButton, 3, 1, 1, 2);

        portComboBox = new QComboBox(layoutWidget);
        portComboBox->setObjectName(QStringLiteral("portComboBox"));

        gridLayout->addWidget(portComboBox, 2, 2, 1, 1);

        SimpleServerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SimpleServerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 216, 21));
        SimpleServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SimpleServerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SimpleServerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleServerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleServerClass->setStatusBar(statusBar);

        retranslateUi(SimpleServerClass);

        QMetaObject::connectSlotsByName(SimpleServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleServerClass)
    {
        SimpleServerClass->setWindowTitle(QApplication::translate("SimpleServerClass", "SimpleServer", 0));
        groupBox->setTitle(QApplication::translate("SimpleServerClass", "Server Dashboard", 0));
        label->setText(QApplication::translate("SimpleServerClass", "Clients Connected:", 0));
        clientsConnectedLabel->setText(QApplication::translate("SimpleServerClass", "blah", 0));
        label_2->setText(QApplication::translate("SimpleServerClass", "Server Status: ", 0));
        serverStatusLabel->setText(QApplication::translate("SimpleServerClass", "blah", 0));
        label_3->setText(QApplication::translate("SimpleServerClass", "Server Port:", 0));
        startServerPushButton->setText(QApplication::translate("SimpleServerClass", "Start Server", 0));
        stopServerPushButton->setText(QApplication::translate("SimpleServerClass", "Stop Server", 0));
    } // retranslateUi

};

namespace Ui {
    class SimpleServerClass: public Ui_SimpleServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLESERVER_H
