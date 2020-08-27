#include "logindialog.h"
#include "ui_logindialog.h"
#include "mainwindow.h"

#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    //net = new networkmanager;�ĳɵ���ģʽ����Ҫ��
    net = networkmanager::getNetworkIntance();//����ģʽʹ�õĶ���
}

LoginDialog::~LoginDialog()
{
    delete ui;
    delete net;
}



void LoginDialog::on_btn_login_clicked()
{/*
    MainWindow *pwin = new MainWindow;
    pwin->show();
    this->close();
    */
    QString msg;
    msg = "Login test";
    msg += "   singal model";
    net->sendPacket(msg);




#if 0
   QString msg;
    QString username = "admin";
    QString password = "123456";

    msg +="Login";
    msg += " ";
    msg += username;
    msg += " ";
    msg += password;

    net->sendPacket(msg);
#endif
}
