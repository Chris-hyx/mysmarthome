#include "networkmanager.h"

networkmanager *networkmanager::net = NULL;

networkmanager::networkmanager(QObject *parent) : QObject(parent)
{
    udpSocket = new QUdpSocket;//创建udpsocket 对象
    udpSocket->bind(8700);//绑定端口号
    //connect （信号发送者，信号，信号接收者，槽函数)
    QObject::connect(udpSocket,SIGNAL(readyRead()),this,SLOT(udpRecvData()));
}

networkmanager::~networkmanager()
{
    delete udpSocket;
}

void networkmanager::sendPacket(QString pack)
{
    //LocalHost, 本地 ip 地址 port: 目标端口号
    udpSocket->writeDatagram(pack.toUtf8(),QHostAddress::LocalHost,7800);
}


 networkmanager *networkmanager::getNetworkIntance()
{
    if(net == NULL){
        net  = new networkmanager;
    }
    return net;
}


//读取udp 数据的槽函数

void networkmanager::udpRecvData()
{
    QByteArray datagram;//存储接收数据
    qint64 len;
    //判断 udpsocket 是否有相应的未处理的数据
    while(udpSocket->hasPendingDatagrams()){
        len = udpSocket->pendingDatagramSize();
        datagram.resize(len);//将字节数组的大小设置为 len
        udpSocket->readDatagram(datagram.data(),len);//将接受的数据存储到字节数组中
        qDebug() <<"data:"<<QString(datagram);
    }
}


