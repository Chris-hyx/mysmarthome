#include "networkmanager.h"

networkmanager *networkmanager::net = NULL;

networkmanager::networkmanager(QObject *parent) : QObject(parent)
{
    udpSocket = new QUdpSocket;//����udpsocket ����
    udpSocket->bind(8700);//�󶨶˿ں�
    //connect ���źŷ����ߣ��źţ��źŽ����ߣ��ۺ���)
    QObject::connect(udpSocket,SIGNAL(readyRead()),this,SLOT(udpRecvData()));
}

networkmanager::~networkmanager()
{
    delete udpSocket;
}

void networkmanager::sendPacket(QString pack)
{
    //LocalHost, ���� ip ��ַ port: Ŀ��˿ں�
    udpSocket->writeDatagram(pack.toUtf8(),QHostAddress::LocalHost,7800);
}


 networkmanager *networkmanager::getNetworkIntance()
{
    if(net == NULL){
        net  = new networkmanager;
    }
    return net;
}


//��ȡudp ���ݵĲۺ���

void networkmanager::udpRecvData()
{
    QByteArray datagram;//�洢��������
    qint64 len;
    //�ж� udpsocket �Ƿ�����Ӧ��δ���������
    while(udpSocket->hasPendingDatagrams()){
        len = udpSocket->pendingDatagramSize();
        datagram.resize(len);//���ֽ�����Ĵ�С����Ϊ len
        udpSocket->readDatagram(datagram.data(),len);//�����ܵ����ݴ洢���ֽ�������
        qDebug() <<"data:"<<QString(datagram);
    }
}


