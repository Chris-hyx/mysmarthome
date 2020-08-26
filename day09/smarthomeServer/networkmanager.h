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
    void sendPacket(QString pack);//发送数据
    static networkmanager *getNetworkIntance(void);//静态函数，其他模块引用 network

signals:

public slots:
    void udpRecvData(void);//槽函数的声明，用来接收 udp 的数据

private:
    QUdpSocket *udpSocket;//定义QUdpSocket 的指针
    static networkmanager *net;//定义静态指针，在类外进行初始化
};

#endif // NETWORKMANAGER_H
