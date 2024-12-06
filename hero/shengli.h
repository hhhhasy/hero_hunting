#ifndef SHENGLI_H
#define SHENGLI_H

#include <QDialog>
#include<QPainter>
namespace Ui {
class shengli;
}

class shengli : public QDialog
{
    Q_OBJECT

public:
    explicit shengli(QWidget *parent = 0);
    ~shengli();
    void paintEvent(QPaintEvent *event);

private:
    Ui::shengli *ui;
};

#endif // SHENGLI_H
