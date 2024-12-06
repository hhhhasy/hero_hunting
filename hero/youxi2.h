#ifndef YOUXI2_H
#define YOUXI2_H

#include <QDialog>
#include<QPainter>
#include<QTimer>
#include<QKeyEvent>
#include"youxi3.h"
namespace Ui {
class youxi2;
}

class youxi2 : public QDialog
{
    Q_OBJECT
public slots:
    void up();
public:
    explicit youxi2(QWidget *parent = 0);
    ~youxi2();
void paintEvent(QPaintEvent *event);
void str();
void keyPressEvent(QKeyEvent *);
void upfood();
void upzhadan();
void die();
void upjiemian();
int score2;
int shengming2;
int n2;
private:
    Ui::youxi2 *ui;
    QRect r;
    QRect food;
    QVector<QRect>zhadan;
    QVector<QRect>zhadan2;
bool y;
int zd;
int zd2;
int ndirection;
 QTimer *timer;
 QString t;
 bool x;
youxi3 *p=new youxi3;

};

#endif // YOUXI2_H
