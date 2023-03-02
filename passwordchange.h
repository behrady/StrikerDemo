#ifndef PASSWORDCHANGE_H
#define PASSWORDCHANGE_H

#include <QMainWindow>

namespace Ui {
class passwordchange;
}

class passwordchange : public QMainWindow
{
    Q_OBJECT

public:
    explicit passwordchange(QWidget *parent = nullptr);
    ~passwordchange();

private slots:
    void on_password_confirm_button_clicked();

private:
    Ui::passwordchange *ui;
};

#endif // PASSWORDCHANGE_H
