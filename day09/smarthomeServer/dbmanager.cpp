#include "dbmanager.h"
#include <QDebug>
#include <QSqlError>

DBManager *DBManager::db = NULL;

DBManager::DBManager(QObject *parent) : QObject(parent)
{
    connectname = "smarthomedb";//设定数据库连接的名字
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE",connectname);//创建数据库对象，使用 SQL
    db.setDatabaseName("smarthome.db");//设置创建的数据库名字

    bool ok = db.open();//打开数据库

    if(!ok){
        qDebug()<<"fail to open database"<<db.lastError().text();
        return;
    }

    //创建数据库表
    QString sql = "CREATE TABLE IF NOT EXITS user(id interger primary key,username text,password text";
    //执行 sql 语句
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
