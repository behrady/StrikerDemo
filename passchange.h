#ifndef PASSCHANGE_H
#define PASSCHANGE_H

#include <QWidget>

namespace Ui {
class passchange;
}

class passchange : public QWidget
{
    Q_OBJECT

public:
    explicit passchange(QWidget *parent = nullptr);
    ~passchange();

private:
    Ui::passchange *ui;
};

#endif // PASSCHANGE_H
