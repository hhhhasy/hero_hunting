#include "xuanyingxiong.h"
#include "ui_xuanyingxiong.h"

xuanyingxiong::xuanyingxiong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xuanyingxiong)
{
    ui->setupUi(this);
}

xuanyingxiong::~xuanyingxiong()
{
    delete ui;
}
void xuanyingxiong::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,800,620,QPixmap(":/n/D:/游戏图片/选英雄"));



}

void xuanyingxiong::on_pushButton_clicked()
{  x=new youxi;
    if(ui->radioButton1->isChecked()){x->n=1;}
    if(ui->radioButton2->isChecked()){x->n=2;}
    if(ui->radioButton3->isChecked()){x->n=3;}
    if(ui->radioButton4->isChecked()){x->n=4;}
    if(ui->radioButton_5->isChecked()){x->n=5;}

    this->close();

    x->show();
}
