#ifndef YOUXI3_H
#define YOUXI3_H

#include <QDialog>
#include<QPainter>
#include<QTimer>
#include<QKeyEvent>
#include"shengli.h"
namespace Ui {
class youxi3;
}

class youxi3 : public QDialog
{
    Q_OBJECT
public slots:
    void up();
public:
    int ndirection;
    explicit youxi3(QWidget *parent = 0);
    ~youxi3();
void paintEvent(QPaintEvent *event);
void str();
void keyPressEvent(QKeyEvent *);
void upzhadan();
void upfood();
void die();
void win();
int shengming3;
int score3;
int n3;
private:
    Ui::youxi3 *ui;
    QVector<QRect>zhadan;
    QVector<QRect>zhadan2;
    QVector<QRect>zhadan3;
    QVector<QRect>zhadan4;
    QTimer *timer;
    QRect r;
    QRect food;
    int zdirection;
     int zdirection2;
      int zdirection3;
       int zdirection4;
       QString t;
       bool x;
       bool c;
       shengli *s=new shengli;

bool y;

};

#endif // YOUXI3_H
