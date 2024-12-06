#include "youxi2.h"
#include "ui_youxi2.h"
#include<QPainter>
#include<QTimer>
youxi2::youxi2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::youxi2),y(false)
{
    ui->setupUi(this);
}

youxi2::~youxi2()
{
    delete ui;
}
void youxi2::paintEvent(QPaintEvent *event){
    if(!y){
    str();}
    upfood();
    upzhadan();
    die();
    upjiemian();
    QPainter painter(this);
    //画框

        painter.setPen(Qt::black);
        painter.setBrush(Qt::gray);
        painter.drawRect(20,20,760,560);

        painter.setPen(Qt::black);
        painter.setBrush(Qt::white);
        painter.drawRect(30,30,740,540);

        // 画格子
        painter.setPen(Qt::blue);
            for(int i=1;i<=54;i++){
                painter.drawLine(30,i*10+30,770,i*10+30);
            }
            for(int i=1;i<=74;i++){
                painter.drawLine(30+i*10,30,i*10+30,570);
            }
            //画背景
            painter.drawPixmap(30,30,740,540,QPixmap(":/n/D:/游戏图片/格子.jpg"));
            //显示得分
                       QFont font1("Courier",16);
                       painter.setFont(font1);
                       painter.setPen(Qt::red);
                       painter.setBrush(Qt::red);
            painter.drawText(680,610,"得分：");
                       painter.drawText(750,610,QString::number(score2));
                       //画生命值
                       QFont font3("Courier",16);
                       painter.setFont(font3);
                       painter.setPen(Qt::red);
                       painter.setBrush(Qt::red);
                       painter.drawText(30,610,"生命值：");
                       for(int i=0;i<shengming2;i++){
                           painter.drawPixmap(120+20*i,595,20,20,QPixmap(":/n/D:/游戏图片/爱心.jpg"));
                       }
                       // 画英雄
                                  painter.setPen(Qt::black);
                                   painter.setBrush(Qt::green);
                                  painter.drawRect(r);
                                  //画宝藏
                                              painter.setPen(Qt::black);
                                              painter.setBrush(Qt::green);
                                             painter.drawRect(food);
                                             painter.drawPixmap(food,QPixmap(":/n/D:/游戏图片/bao.jpg"));
                                             //画炸弹
                                             for(int i=0;i<zhadan.size();i++){
                                                 painter.setPen(Qt::black);
                                                 painter.setBrush(Qt::green);
                                                painter.drawRect(zhadan[i]);
                                                painter.drawPixmap(zhadan[i],QPixmap(":/n/D:/游戏图片/zha.jpg"));
                                             }
                                             for(int i=0;i<zhadan2.size();i++){
                                                 painter.setPen(Qt::black);
                                                 painter.setBrush(Qt::green);
                                                painter.drawRect(zhadan2[i]);
                                                 painter.drawPixmap(zhadan2[i],QPixmap(":/n/D:/游戏图片/zha.jpg"));
                                             }
                                             //显示游戏结束
                                                        if(x==true){

                                                       QFont font2("Courier",32);
                                                        painter.setFont(font2);
                                                        painter.setPen(Qt::red);
                                                        painter.setBrush(Qt::red);
                                             painter.drawText(280,300,t);
                                                        timer->stop();
                                                       }
                                                        switch(n2){
                                                        case 1:
                                                        {
                                                            painter.drawPixmap(r,QPixmap(":/n/D:/游戏图片/马里奥.jpg"));
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            painter.drawPixmap(r,QPixmap(":/n/D:/游戏图片/喜羊羊.jpg"));
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            painter.drawPixmap(r,QPixmap(":/n/D:/游戏图片/光头强.png"));
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            painter.drawPixmap(r,QPixmap(":/n/D:/游戏图片/冰火人.png"));
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            painter.drawPixmap(r,QPixmap(":/n/D:/游戏图片/奥特曼.jpg"));
                                                            break;
                                                        }
                                                        default:;
                                                        }


}
void youxi2::str(){
    ndirection=2;
    zd=2;
    zd2=1;
    y=true;
    QRect s(100,100,20,20);
    r=s;
    QRect f(200,200,20,20);
    food=f;
    zhadan.resize(13);
    zhadan2.resize(12);
    for(int i=0;i<zhadan.size();i++){
        int x,y;

       x=60*i+30;
       y=30;
        QRect s(x,y,20,20);
        zhadan[i]=s;}
    for(int i=0;i<zhadan2.size();i++){
        int x,y;

       x=60*i+50;
       y=520;
        QRect s(x,y,20,20);
        zhadan2[i]=s;}
    timer=new QTimer(this);
        timer->start(180);
       connect(timer,SIGNAL(timeout()),SLOT(up()));
}
void youxi2::up(){
    switch(ndirection){
        case 1:
            r.setTop(r.top()-10);
            r.setBottom(r.bottom()-10);
        break;
        case 2:
            r.setTop(r.top()+10);
            r.setBottom(r.bottom()+10);
        break;
        case 3:
            r.setLeft(r.left()-10);
            r.setRight(r.right()-10);
            break;
        case 4:
            r.setLeft(r.left()+10);
            r.setRight(r.right()+10);
            break;
        default:;}
    for(int i=0;i<zhadan.size();i++){
    switch(zd){
        case 1:
            zhadan[i].setTop(zhadan[i].top()-10);
            zhadan[i].setBottom(zhadan[i].bottom()-10);
        break;
        case 2:
            zhadan[i].setTop(zhadan[i].top()+10);
            zhadan[i].setBottom(zhadan[i].bottom()+10);
        break;
        case 3:
            zhadan[i].setLeft(zhadan[i].left()-10);
            zhadan[i].setRight(zhadan[i].right()-10);
            break;
        case 4:
            zhadan[i].setLeft(zhadan[i].left()+10);
            zhadan[i].setRight(zhadan[i].right()+10);
            break;
        default:;}}
    for(int i=0;i<zhadan2.size();i++){
    switch(zd2){
        case 1:
            zhadan2[i].setTop(zhadan2[i].top()-10);
            zhadan2[i].setBottom(zhadan2[i].bottom()-10);
        break;
        case 2:
            zhadan2[i].setTop(zhadan2[i].top()+10);
            zhadan2[i].setBottom(zhadan2[i].bottom()+10);
        break;
        case 3:
            zhadan2[i].setLeft(zhadan2[i].left()-10);
            zhadan2[i].setRight(zhadan2[i].right()-10);
            break;
        case 4:
            zhadan2[i].setLeft(zhadan2[i].left()+10);
            zhadan2[i].setRight(zhadan2[i].right()+10);
            break;
        default:;}}



    update();}

 void youxi2::keyPressEvent(QKeyEvent *event){
     QKeyEvent *key=(QKeyEvent*)event;
         switch(key->key()){
         case Qt::Key_Up: ndirection=1;break;
         case Qt::Key_Down: ndirection=2;break;
          case Qt::Key_Left:ndirection=3;break;
         case Qt::Key_Right:ndirection=4;break;
         default:;}}

void youxi2::upfood(){
    if(r==food){
       r=food;
       int x,y;
       x=qrand()%50+3;
       y=qrand()%50+3;
      QRect s(x*10,y*10,20,20);
food=s;
score2+=10;
timer->stop();
timer->start(200-2*score2);
    }

}
void youxi2::upzhadan(){
    if(zhadan[0].bottom()>=540||zhadan2[0].top()<=30){
        for(int i=0;i<zhadan.size();i++){
            int x,y;

           x=60*i+30;
           y=30;
            QRect s(x,y,20,20);
            zhadan[i]=s;}
        for(int i=0;i<zhadan2.size();i++){
            int x,y;

         x=60*i+50;
         y=540;
            QRect s(x,y,20,20);
            zhadan2[i]=s;}
    }
}
void youxi2::die(){
    if(r.bottom()>540||r.top()<30||r.left()>740||r.right()<30){

        t="游戏结束";
        x=true;}


    for(int i=0;i<zhadan.size();i++){

        if(r.x()==zhadan[i].x()&&r.y()==zhadan[i].y()){
            shengming2-=1;
            if(shengming2==0)

        {x=true;  t="游戏结束";}}
    }
    for(int i=0;i<zhadan2.size();i++){
        if(r.x()==zhadan2[i].x()&&r.y()==zhadan2[i].y())
        { shengming2-=1;
            if(shengming2==0){x=true;  t="游戏结束";}
    }
}}
void youxi2::upjiemian(){
    if(score2==80){
        this->close();
        p=new youxi3;
p->shengming3=this->shengming2;
p->score3=this->score2;
p->n3=this->n2;
        p->show();
    }



}
