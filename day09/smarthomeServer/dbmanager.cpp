#include "dbmanager.h"
#include <QDebug>
#include <QSqlError>

DBManager *DBManager::db = NULL;

DBManager::DBManager(QObject *parent) : QObject(parent)
{
    connectname = "smarthomedb";//�趨���ݿ����ӵ�����
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE",connectname);//�������ݿ����ʹ�� SQL
    db.setDatabaseName("smarthome.db");//���ô��������ݿ�����

    bool ok = db.open();//�����ݿ�

    if(!ok){
        qDebug()<<"fail to open database"<<db.lastError().text();
        return;
    }

    //�������ݿ��
    QString sql = "CREATE TABLE IF NOT EXITS user(id interger primary key,username text,password text";
    //ִ�� sql ���
    QSqlQuery query(QSqlDatabase::database(connectname));
    if(!query.exec(sql)){
        qDebug()<<query.lastError().text();
    }

}

DBManager *DBManager::getDbIntance()
{
    if(db == NULL){
        db = new DBManager;

    }
    return db;
}
