#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QDebug>

void MainWindow::timerEvent(QTimerEvent *event){
    if(timer_key==-1){
        switch (timer_key) {
            case -1:
                // init
                break;
            case 0:
                pushbtn_animte = 1;
                break;
            case 1:
                pushbtn_animte = 0;
                break;
            case 2:

                pushbtn_animte = 0;
                break;
            case 3:

                pushbtn_animte = 1;
                break;
            case 4:

                pushbtn_animte = 0;
                break;
            case 5:

                pushbtn_animte = 1;
                break;
            case 6:

                pushbtn_animte = 0;
                break;
            case 7:

                pushbtn_animte = 1;
                break;
            case 8:

                pushbtn_animte = 0;
                break;
            case 9:

                pushbtn_animte = 1;
                break;
            case 10:
                timer_key = 0;
                break;
        }
        timer_key++;
    }
}

template <class T>
void MainWindow::Animation_start(T& item, int x1, int y1, int x2, int y2, int delay){
    item->setGeometry(x1,y1, item->width(), item->height());
    int animation_raw = delay/100;
    int multiple_x=1, multiple_y=1;
    if(x1!=x2) multiple_x = abs(x1-x2)/animation_raw;
    if(y1!=y2) multiple_y = abs(y1-y2)/animation_raw;

    int x=0,y=0;

    for(int i=0;((x==x2)&&(y==y2));i++){
        m_nTimerID = this->startTimer(100);
        if(pushbtn_animte == 0) continue;
        if(x1!=x2){
            x = x1+multiple_x;
        }else if(x1 == x2){
            x = x2;
        }
        if(y1!=y2){
            y = y1+multiple_y;
        }else if(y1 == y2){
            y = y2;
        }
        item->setGeometry(x,y, item->width(), item->height());
        qDebug() << x << ":" << y;
    }

    qDebug() << animation_raw << ":" << multiple_x << ":" << multiple_y << ":" << x << ":" << y;

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Animation_start(ui->pushButton, 0, 0, 100, 100, 1000);
}


MainWindow::~MainWindow()
{
    delete ui;
}

