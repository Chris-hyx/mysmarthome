#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QObject>
#include <QUdpSocket>

class networkmanager : public QObject
{
    Q_OBJECT
public:
    explicit networkmanager(QObject *parent = nullptr);
    ~networkmanager();
    void sendPacket(QString pack);//��������
    static networkmanager *getNetworkIntance(void);//��̬����������ģ������ network

signals:

public slots:
    void udpRecvData(void);//�ۺ������������������� udp ������

private:
    QUdpSocket *udpSocket;//����QUdpSocket ��ָ��
    static networkmanager *net;//���徲ָ̬�룬��������г�ʼ��
};

#endif // NETWORKMANAGER_H
