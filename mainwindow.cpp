#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "passwordchange.h"
#include <QDateTime>



bool timerstarted = false;
qint64 starttime;
qint64 totaltime;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Setup Static Data.
    ui->name->setText("Dr, John Smith MD");
    ui->address->setText("1000 Clinic Drive, STE 200. Tel:(212)-222-2222");
    ui->practice->setText("Very Good DryEye Clinic");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_change_pass_clicked()
{
    passChangeView = new passwordchange(this);
    passChangeView->show();
}


void MainWindow::on_logout_clicked()
{

}


int countWords(QString text)
{
    // Parse text and count spaces.
    return 50;
}

// returns a word per minute rate
int strikerRate(int duration, QString text)
{
    int numWords = countWords(text);
    float durationMinutes = duration / 60.0;
    int rate = numWords / durationMinutes;
    return rate;
}

void MainWindow::on_plainTextEdit_textChanged()
{
    if(!timerstarted)
    {
        starttime = QDateTime::currentMSecsSinceEpoch();
        timerstarted = true;
    } else {
        if(ui->plainTextEdit->toPlainText().last(1) == '\n')
        {
            totaltime = QDateTime::currentMSecsSinceEpoch() - starttime;
            int duration = totaltime / 1000;
            QMessageBox::information(this, "Alert", "Done " + QString::number(strikerRate(duration, ui->plainTextEdit->toPlainText())));
            ui->plainTextEdit->clear();
            timerstarted = false;
        }

    }
}
