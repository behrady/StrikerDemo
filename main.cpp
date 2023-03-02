#include "login.h"

#include <QApplication>
#include "dbQuery.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    setupDB();
    login w;
    w.show();
    return a.exec();
}


