#include <QCoreApplication>
#include "networkmanager.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //networkmanager net;
    networkmanager *net= networkmanager::getNetworkIntance();
    return a.exec();
}
