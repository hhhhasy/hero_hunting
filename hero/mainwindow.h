#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"xuanyingxiong.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
   xuanyingxiong *x=new xuanyingxiong;
};

#endif // MAINWINDOW_H
