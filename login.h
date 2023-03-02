#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "mainwindow.h"


namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_button_clicked();

private:
    Ui::login *ui;
    MainWindow *mainWindow;
};

#endif // LOGIN_H
