#include "login.h"
#include "ui_login.h"
#include <QString>
#include "dbQuery.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->password_text->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

void login::on_login_button_clicked()
{
    QString uname;
    QString pass;

    uname = ui->uname_text->text();
    pass = ui->password_text->text();

    if (uname.isEmpty() || pass.isEmpty())
    {
        ui->login_error->setText("error, unam or pass is empty");
    } else {
        if(checkLogin(uname, pass) == 0)
        {
            hide();
            mainWindow = new MainWindow(this);
            mainWindow->show();
        }

    }
}

