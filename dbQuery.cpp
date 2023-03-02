#include "dbQuery.h"
#include <QString>

// Setup DB and Populate DB
void setupDB()
{
    QString path = "/Users/behradanalui/untitled/demoDB.sqlite";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    db.open();
    QSqlQuery query;
    query.exec("create table credentials "
      "(id integer primary key, "
      "uname varchar(10), "
      "password varchar(10))");
    query.exec("create table results "
      "(id integer primary key, "
      "uname varchar(10), "
      "speed INTEGER)");

}

//
int checkLogin(QString uname, QString pass)
{
    // if uname does not exist return 1
    // if pass incorrect return 2
    // if pass match return0
    return 0;
}

// Update current Users Password
void updatePassword(QString uname, QString newpass)
{

}

void storeResults(int rate)
{

}
