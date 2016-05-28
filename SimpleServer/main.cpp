#include "simpleserver.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleServer w;
    w.show();
    return a.exec();
}
