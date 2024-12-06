#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"xuanyingxiong.h"
#include<QMessageBox>
#include<QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){
     QPainter painter(this);
     painter.drawPixmap(0,0,800,620,QPixmap(":/n/D:/游戏图片/寻宝背景"));
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    x=new xuanyingxiong;
    x->show();
}





void MainWindow::on_pushButton_2_clicked()
{

    QMessageBox::information(NULL,"退出","您已退出游戏");
    this->close();
}


