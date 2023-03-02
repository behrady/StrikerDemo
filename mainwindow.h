#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <passwordchange.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_change_pass_clicked();
    void on_logout_clicked();
    void on_plainTextEdit_textChanged();


private:
    Ui::MainWindow *ui;
    passwordchange *passChangeView;
};
#endif // MAINWINDOW_H
