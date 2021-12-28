#include "ui_test_project.h"
#include "ui_ui_test_project.h"
#include <QMessageBox>
#include <QThread>
QIcon icon;
int setIcon_n;
bool setIcon_weapons=false,setIcon_armors=false,setIcon_leg=false;
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

    ui->select_item->addItem("");

    ui->backpack_gui->setVisible(false);
    ui->shop_gui->setVisible(false);
    ui->setting_gui->setVisible(false);

    //getitem
    QFile mFile;
    QString path="./item";
    QDir *dir=new QDir(path);
    QStringList filter;
    filter<<"*.txt";
    dir->setNameFilters(filter);
    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
    for(int n=1;n<=fileInfo->count();n++){
        QString file=fileInfo->at(n-1).filePath();
        mFile.setFileName(file);
        if(!mFile.open(QFile::ReadOnly | QFile::Text)){
            qDebug()<<"無法開啟檔案";
            return;
        }
        QStringList list= QString(mFile.readAll()).split("\n");
        file = file.remove("./item/");
        file = file.remove(".txt");
        itemlist.item[n].icon.addFile(":/assets/images/"+file+".png");
        itemlist.item[n].name=list[0];
        itemlist.item[n].atk =list[1].toInt();
        itemlist.item[n].def =list[2].toInt();
        itemlist.item[n].kind=list[3];
        ui->select_item->addItem(itemlist.item[n].icon,list[0]);
    }
    mFile.flush();
    mFile.close();
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
    //exp
    if(ui->monsterHp->value()<=0){
        QThread::msleep(500);
        killcount +=1;
        int plusexp=ui->exp_bar->value()+rand()%20+5;
        if(plusexp<=100){
            ui->exp_bar->setValue(plusexp);
        }else{
            ui->exp_bar->setValue(0);
        }
        monster_note->hp=monster_note->default_hp;
        ui->monsterHp->setValue(100);
        player_note->hp = player_note->default_hp;
        ui->playerHp->setValue(player_note->hp*100/player_note->default_hp);
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

void UI_Test_Project::on_select_item_activated(const QString &arg1)
{
    int n=1;
    if(arg1 == ""){
        ui->item_info_panel->setText("");
    }else{
        while(true){
            if(arg1 == itemlist.item[n].name){
                ui->item_info_panel->setText(QStringLiteral("Name：")+itemlist.item[n].name+QStringLiteral("\nAtk：")+QString::number(itemlist.item[n].atk)+QStringLiteral("\nDef：")+QString::number(itemlist.item[n].def));
                break;
            }
            n++;
        }
    }
}


void UI_Test_Project::on_equi_clicked()
{
    int n=1;
    QString arg1=ui->select_item->currentText();
    if(arg1 == ""){
        ui->item_info_panel->setText("");
    }else{
        while(true){
            if(arg1 == itemlist.item[n].name){
                setIcon_n = n;
                if(itemlist.item[n].kind == "weapons"){
                    setIcon_weapons = true;
                    ui->weapons_1->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
                    ui->weapons_2->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
                }else if(itemlist.item[n].kind == "armor"){
                    setIcon_armors = true;
                    ui->armor->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
                }else if(itemlist.item[n].kind == "leg"){
                    setIcon_leg = true;
                    ui->leg->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
                }
                break;
            }
            n++;
        }
    }
}


void UI_Test_Project::on_weapons_1_clicked()
{
    if(setIcon_weapons){
        setIcon_weapons = false;
        player_note->set_weapons_1(&itemlist.item[setIcon_n]);
        icon = player_note->weapons_1->icon;
        ui->weapons_1->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->weapons_2->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->weapons_1->setText("");
        ui->weapons_1->setIcon(icon);
    }else{
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setWindowTitle(QStringLiteral("系統訊息"));
        msgBox->setText(QStringLiteral("要解除武器嗎?"));
        QPushButton *btn_sure = msgBox->addButton(QStringLiteral("确定"), QMessageBox::AcceptRole);
         msgBox->addButton(QStringLiteral("取消"), QMessageBox::RejectRole);
        msgBox->setStyleSheet("background-color:white");
        msgBox->exec();
        if(msgBox->clickedButton() == btn_sure){
            player_note->set_weapons_1(new Equi());
            ui->weapons_1->setText(QStringLiteral("主手武器"));
            ui->weapons_1->setIcon(QIcon());
        }
    }
}


void UI_Test_Project::on_weapons_2_clicked()
{
    if(setIcon_weapons){
        setIcon_weapons = false;
        player_note->set_weapons_2(&itemlist.item[setIcon_n]);
        icon = player_note->weapons_2->icon;
        ui->weapons_1->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->weapons_2->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->weapons_2->setText("");
        ui->weapons_2->setIcon(icon);
    }else{
       QMessageBox *msgBox = new QMessageBox();
       msgBox->setWindowTitle(QStringLiteral("系統訊息"));
       msgBox->setText(QStringLiteral("要解除武器嗎?"));
       QPushButton *btn_sure = msgBox->addButton(QStringLiteral("确定"), QMessageBox::AcceptRole);
       msgBox->addButton(QStringLiteral("取消"), QMessageBox::RejectRole);
       msgBox->setStyleSheet("background-color:white");
       msgBox->exec();
       if(msgBox->clickedButton() == btn_sure){
           player_note->set_weapons_2(new Equi());
           ui->weapons_2->setText(QStringLiteral("副手武器"));
           ui->weapons_2->setIcon(QIcon());
       }
    }
}


void UI_Test_Project::on_armor_clicked()
{
    if(setIcon_armors){
        setIcon_armors = false;
        player_note->set_armor(&itemlist.item[setIcon_n]);
        icon = player_note->armor->icon;
        ui->armor->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->leg->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->armor->setText("");
        ui->armor->setIcon(icon);
    }else{
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setWindowTitle(QStringLiteral("系統訊息"));
        msgBox->setText(QStringLiteral("要解除護甲嗎?"));
        QPushButton *btn_sure = msgBox->addButton(QStringLiteral("确定"), QMessageBox::AcceptRole);
         msgBox->addButton(QStringLiteral("取消"), QMessageBox::RejectRole);
        msgBox->setStyleSheet("background-color:white");
        msgBox->exec();
        if(msgBox->clickedButton() == btn_sure){
            player_note->set_weapons_1(new Equi());
            ui->armor->setText(QStringLiteral("護甲區塊"));
            ui->armor->setIcon(QIcon());
        }
    }
}


void UI_Test_Project::on_leg_clicked()
{
    if(setIcon_leg){
        setIcon_leg = false;
        player_note->set_leg(&itemlist.item[setIcon_n]);
        icon = player_note->leg->icon;
        ui->armor->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->leg->setStyleSheet("border:3px solid black;\nborder-radius:16px;\nborder-width:8px;");
        ui->leg->setText("");
        ui->leg->setIcon(icon);
    }else{
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setWindowTitle(QStringLiteral("系統訊息"));
        msgBox->setText(QStringLiteral("要解除護腿嗎?"));
        QPushButton *btn_sure = msgBox->addButton(QStringLiteral("确定"), QMessageBox::AcceptRole);
        msgBox->addButton(QStringLiteral("取消"), QMessageBox::RejectRole);
        msgBox->setStyleSheet("background-color:white");
        msgBox->exec();
        if(msgBox->clickedButton() == btn_sure){
            player_note->set_weapons_1(new Equi());
            ui->leg->setText(QStringLiteral("護腿區塊"));
            ui->leg->setIcon(QIcon());
        }
    }
}

