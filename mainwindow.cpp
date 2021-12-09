#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPoint point=ui->label->pos();
    ui->label->setText(QString::number(point.x())+" "+QString::number(point.y()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    m_nTimerId = this->startTimer(10);
}
void MainWindow::timerEvent(QTimerEvent *event)
 {
    QPoint point=ui->label->pos();
    if(point.x()+5+ui->label->width() < 800){
        ui->label->setGeometry(point.x()+5,point.y(),ui->label->width(),ui->label->height());
        ui->label->setText(QString::number(point.x())+" "+QString::number(point.y()));
    }else{
        killTimer(m_nTimerId);
    }
 }
