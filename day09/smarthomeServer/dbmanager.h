#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
class DBManager : public QObject
{
    Q_OBJECT
public:
    explicit DBManager(QObject *parent = nullptr);
    static DBManager *getDbIntance(void);
signals:

public slots:
private:
    QString connectname;//记录与数据库连接的名字出
    static DBManager *db;
};

#endif // DBMANAGER_H
