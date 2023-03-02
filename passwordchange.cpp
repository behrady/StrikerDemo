#include "passwordchange.h"
#include "ui_passwordchange.h"
#include "dbQuery.h"

passwordchange::passwordchange(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::passwordchange)
{
    ui->setupUi(this);
}

passwordchange::~passwordchange()
{
    delete ui;
}

void passwordchange::on_password_confirm_button_clicked()
{
    QString newpass = ui->new_password->text();
    QString newpassconfirm = ui->confrim_password->text();
    if(newpass.compare(newpassconfirm) == 0)
    {
        hide();
        updatePassword(newpass);

    } else {
        ui->passchange_error->setText("Does not match");
    }
}

