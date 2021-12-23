﻿#ifndef UI_TEST_PROJECT_H
#define UI_TEST_PROJECT_H

#include <QMainWindow>
#include <QDebug>
#include <QMovie>
#include <QFile>
#include <QDir>
#include "play_item.h"
QT_BEGIN_NAMESPACE
namespace Ui { class UI_Test_Project; }
QT_END_NAMESPACE

class UI_Test_Project : public QMainWindow
{
    Q_OBJECT

public:
    UI_Test_Project(QWidget *parent = nullptr);
    ~UI_Test_Project();
    int m_nTimerID;
    int killcount=0;
    Equilist itemlist;
    player *player_note=new player(100,1);
    player *monster_note=new player(100);
private slots:
    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_back_clicked();

    void on_close_backpack_clicked();

    void on_shopButton_clicked();

    void on_settingButton_clicked();

    void on_backtogame_clicked();

    void on_shop_close_panel_clicked();

    void on_endgame_clicked();

    void on_select_item_activated(const QString &arg1);

    void on_equi_clicked();

    void timerEvent(QTimerEvent *event);
private:
    Ui::UI_Test_Project *ui;
};

#endif // UI_TEST_PROJECT_H
