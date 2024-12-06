#ifndef YOUXI_H
#define YOUXI_H
#include<QPainter>
#include <QDialog>
#include<QKeyEvent>
#include"youxi2.h"
namespace Ui {
class youxi;
}

class youxi : public QDialog
{
    Q_OBJECT




public slots:
    void up();

public:
    explicit youxi(QWidget *parent = 0);
    ~youxi();
int n;
void paintEvent(QPaintEvent *event);
void keyPressEvent(QKeyEvent *);
void str();
void upfood();
void die();
void upzhadan();
void upjiemain();
private:
    Ui::youxi *ui;
    QRect r;
    int ndirection;
    QTimer *timer;
bool y;
QRect food;
int score;
bool x;
QString t;
QVector<QRect>zhadan;
QVector<QRect>zhadan2;
int zdirection;
int zdirection2;
int shengming;
youxi2 *p=new youxi2;

};



#endif // YOUXI_H
