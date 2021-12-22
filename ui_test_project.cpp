#include "ui_test_project.h"
#include "ui_ui_test_project.h"
#include <QMessageBox>
#include <QThread>
UI_Test_Project::UI_Test_Project(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI_Test_Project)
{
    ui->setupUi(this);
    srand( time(NULL) );
    QMovie *movie = new QMovie(":/assets/images/monster1.gif");
    QImage img;
    ui->player->setScaledContents(true);
    img.load(":/assets/images/play_icon.png");
    ui->player->setPixmap(QPixmap::fromImage(img));
    movie->start();
    ui->monster->setMovie(movie);
    ui->monster->setScaledContents(true);

    ui->backpack_gui->setVisible(false);
    ui->shop_gui->setVisible(false);
    ui->setting_gui->setVisible(false);

    ui->select_item->addItem(QStringLiteral("測試物品"));
    ui->select_item->addItem(QStringLiteral("測試裝備"));
}

UI_Test_Project::~UI_Test_Project()
{
    delete ui;
}
void UI_Test_Project::timerEvent(QTimerEvent *event){
    int who=rand()%10+1;
    int monster_atk=monster_note->atk+rand()%5+1;
    int player_atk=player_note->getatk();
    int player_def=player_note->getdef();
    if(who == 1){
        if(player_note->hp<monster_atk){
            player_note->hp=0;
            ui->playerHp->setValue(0);
        }else{
            player_note->hp-=monster_atk+player_def;
            ui->playerHp->setValue(player_note->gethp());
        }
    }else if(who > 3){
        if(ui->monsterHp->value()<player_atk){
            monster_note->hp=0;
            ui->monsterHp->setValue(0);
        }else{
            monster_note->hp-=player_atk;
            ui->monsterHp->setValue(monster_note->gethp());
        }
    }
    if(ui->monsterHp->value()<=0){
        QThread::msleep(500);
        killcount +=1;
        ui->exp_bar->setValue(ui->exp_bar->value()+rand()%20+5);
        monster_note->hp=monster_note->default_hp;
        ui->monsterHp->setValue(100);
        player_note->hp = player_note->default_hp;
        ui->playerHp->setValue(player_note->hp*100/player_note->default_hp);
        QThread::msleep(500);
    }
}

void UI_Test_Project::on_startButton_clicked()
{
    m_nTimerID = this->startTimer(300);
    QIcon icon1,icon2;
    icon1.addFile(QString::fromUtf8(":/assets/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
    ui->stopButton->setIcon(icon1);
    icon2.addFile(QString::fromUtf8(":/assets/images/play-button%1.png").arg(2), QSize(), QIcon::Normal, QIcon::Off);
    ui->startButton->setIcon(icon2);
}


void UI_Test_Project::on_stopButton_clicked()
{
    killTimer(m_nTimerID);
    QIcon icon1,icon2;
    icon1.addFile(QString::fromUtf8(":/assets/images/stop2.png"), QSize(), QIcon::Normal, QIcon::Off);
    ui->stopButton->setIcon(icon1);
    icon2.addFile(QString::fromUtf8(":/assets/images/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
    ui->startButton->setIcon(icon2);
}

void UI_Test_Project::on_back_clicked()
{
    ui->setting_gui->setVisible(false);
    ui->shop_gui->setVisible(false);
    ui->backpack_gui->setVisible(true);
    ui->backpack_gui->setGeometry(40,40,741,381);
}


void UI_Test_Project::on_close_backpack_clicked()
{
    ui->backpack_gui->setVisible(false);
}


void UI_Test_Project::on_shopButton_clicked()
{
    ui->setting_gui->setVisible(false);
    ui->backpack_gui->setVisible(false);
    ui->shop_gui->setVisible(true);
    ui->shop_gui->setGeometry(40,40,741,381);
}


void UI_Test_Project::on_settingButton_clicked()
{
    ui->shop_gui->setVisible(false);
    ui->backpack_gui->setVisible(false);
    ui->setting_gui->setVisible(true);
    ui->setting_gui->setGeometry(280,80,250,300);
}


void UI_Test_Project::on_backtogame_clicked()
{
    ui->setting_gui->setVisible(false);
}


void UI_Test_Project::on_shop_close_panel_clicked()
{
    ui->shop_gui->setVisible(false);
}

void UI_Test_Project::on_endgame_clicked()
{
    close();
}
