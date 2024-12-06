#ifndef XUANYINGXIONG_H
#define XUANYINGXIONG_H
#include"youxi.h"
#include <QDialog>
#include<QPainter>
namespace Ui {
class xuanyingxiong;
}

class xuanyingxiong : public QDialog
{
    Q_OBJECT

public:

    explicit xuanyingxiong(QWidget *parent = 0);
    ~xuanyingxiong();
void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();

private:
    Ui::xuanyingxiong *ui;
    youxi *x=new youxi;
};

#endif // XUANYINGXIONG_H
