#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "networkmanager.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:

    void on_btn_login_clicked();

private:
    Ui::LoginDialog *ui;
    networkmanager *net;//�������緢�ͣ���Ҫ��������ģ���ָ�����
};

#endif // LOGINDIALOG_H
