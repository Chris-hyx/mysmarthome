#include "logindialog.h"
#include "ui_logindialog.h"
#include "mainwindow.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    net = new networkmanager;
}

LoginDialog::~LoginDialog()
{
    delete ui;
    delete net;
}


void LoginDialog::on_btn_register_clicked()
{
    MainWindow *pwin = new MainWindow;
    pwin->show();
    this->close();
}

void LoginDialog::on_btn_login_clicked()
{

}
