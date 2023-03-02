#ifndef DBQUERY_H
#define DBQUERY_H

#include <QDir>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>

void setupDB();
int checkLogin(QString uname, QString pass);
void updatePassword(QString uname, QString newpass);
void storeResults(int rate);

#endif // DBQUERY_H
