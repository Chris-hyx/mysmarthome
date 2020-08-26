/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_user_2;
    QLineEdit *lineEdit_user_2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_register;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(411, 266);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_user = new QLabel(LoginDialog);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setStyleSheet(QStringLiteral("image: url(:/images/user.png);"));

        horizontalLayout_3->addWidget(label_user);

        lineEdit_user = new QLineEdit(LoginDialog);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_user->sizePolicy().hasHeightForWidth());
        lineEdit_user->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEdit_user);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 6);

        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_user_2 = new QLabel(LoginDialog);
        label_user_2->setObjectName(QStringLiteral("label_user_2"));
        label_user_2->setStyleSheet(QStringLiteral("image: url(:/images/password.png);"));

        horizontalLayout_8->addWidget(label_user_2);

        lineEdit_user_2 = new QLineEdit(LoginDialog);
        lineEdit_user_2->setObjectName(QStringLiteral("lineEdit_user_2"));
        sizePolicy1.setHeightForWidth(lineEdit_user_2->sizePolicy().hasHeightForWidth());
        lineEdit_user_2->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(lineEdit_user_2);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 6);

        horizontalLayout_5->addLayout(horizontalLayout_8);

        horizontalSpacer_10 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 3);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(158, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_register = new QPushButton(LoginDialog);
        btn_register->setObjectName(QStringLiteral("btn_register"));
        sizePolicy1.setHeightForWidth(btn_register->sizePolicy().hasHeightForWidth());
        btn_register->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_register);

        btn_login = new QPushButton(LoginDialog);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_login);


        horizontalLayout_7->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(88, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);

        horizontalLayout_2->addLayout(horizontalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(78, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 40);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDialog", "\346\231\272\350\203\275\345\256\266\345\261\205", Q_NULLPTR));
        label_user->setText(QString());
        lineEdit_user->setText(QString());
        label_user_2->setText(QString());
        lineEdit_user_2->setText(QString());
        btn_register->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        btn_login->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
