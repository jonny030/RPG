#include "ui_test_project.h"
#include "ui_ui_test_project.h"

#include <QMessageBox>

UI_Test_Project::UI_Test_Project(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI_Test_Project)
{
    ui->setupUi(this);
    srand( time(NULL) );
    QMovie *movie = new QMovie(":/assets/images/monster1.gif");
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
    int atk=rand()%11+1;
    if(who == 1){
        if(ui->playerHp->value()<atk){
            ui->playerHp->setValue(0);
        }else{
            ui->playerHp->setValue(ui->playerHp->value()-atk);
        }
    }else if(who > 3){
        if(ui->monsterHp->value()<atk){
            ui->monsterHp->setValue(0);
        }else{
            ui->monsterHp->setValue(ui->monsterHp->value()-atk);
        }
        if(ui->monsterHp->value()<=0){
            _sleep(500);
            killcount +=1;
            ui->exp_bar->setValue(ui->exp_bar->value()+rand()%5+1);
            ui->monsterHp->setValue(100);
            ui->playerHp->setValue(ui->playerHp->value()+rand()%10+1);
            _sleep(500);
        }
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

