#include <QCoreApplication>
#include "networkmanager.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    networkmanager net;
    return a.exec();
}
