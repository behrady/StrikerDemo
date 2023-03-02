#include "passchange.h"
#include "ui_passchange.h"

passchange::passchange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::passchange)
{
    ui->setupUi(this);
}

passchange::~passchange()
{
    delete ui;
}
