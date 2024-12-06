#include "shengli.h"
#include "ui_shengli.h"
#include<QPainter>
shengli::shengli(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shengli)
{
    ui->setupUi(this);
}

shengli::~shengli()
{
    delete ui;
}
void shengli::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,800,620,QPixmap(":/n/D:/游戏图片/烟花.jpg"));




}
