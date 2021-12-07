#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_setting_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("觸發按鈕");
    msgBox.exec();
}

