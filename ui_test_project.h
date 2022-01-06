#ifndef UI_TEST_PROJECT_H
#define UI_TEST_PROJECT_H

#include <QMainWindow>
#include <QDebug>
#include <QMovie>
#include <QFile>
#include <QTimer>
#include <QDir>
#include <QLabel>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>
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
    QTimer *sleepTimer = new QTimer();
    bool sleep_bool=true;
    QTimer *myTimer = new QTimer();
    Equilist itemlist;
    player *player_note=new player(100,1);
    player *monster_note=new player(100);
    QMediaPlaylist *playlist = new QMediaPlaylist();
    QMediaPlayer *backmusic = new QMediaPlayer();
    QLabel *Win=new QLabel();
    int soundVolume;
    int backVolume;

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

    void timerstart();

    void sleep();

    void on_weapons_1_clicked();

    void on_weapons_2_clicked();

    void on_armor_clicked();

    void on_leg_clicked();

    void initHp();

    void on_shop_select_item_activated(const QString &arg1);

    void on_buy_clicked();

    void clickedButton();

    void playSound(QString url);

    void getduration();

    void on_volumesetting_clicked();

    void on_volume_close_btn_clicked();

    void setsoundVolume();

    void setbackVolume();

    void on_soundmute_stateChanged();

    void on_backmute_stateChanged();

    void on_Swordsman_clicked();

    void on_Priest_clicked();

private:
    Ui::UI_Test_Project *ui;
};

#endif // UI_TEST_PROJECT_H
