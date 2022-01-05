﻿#include "ui_test_project.h"
#include "ui_ui_test_project.h"
#include <QMessageBox>
#include <QPixmap>
QIcon icon;
Equi setIcon;
int bigegg_count=0;
bool setIcon_weapons=false,setIcon_armors=false,setIcon_leg=false,bigegg=false,end=false;
UI_Test_Project::UI_Test_Project(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI_Test_Project)
{
    ui->setupUi(this);
    connect(sleepTimer, SIGNAL(timeout()), this, SLOT(sleep()));
    connect(myTimer, SIGNAL(timeout()), this, SLOT(timerstart()));
    connect(backmusic,SIGNAL(durationChanged(qint64)),this,SLOT(getduration()));

    connect(ui->volume_sounds_silderbar, SIGNAL(valueChanged(int)),this, SLOT(setsoundVolume()));
    connect(ui->volume_body_silderbar, SIGNAL(valueChanged(int)),this, SLOT(setbackVolume()));
    soundVolume=ui->volume_sounds_silderbar->value();
    srand( time(NULL) );
    QMovie *movie = new QMovie(":/assets/images/monster1.gif");
    QImage img;
    ui->player->setScaledContents(true);
    img.load(":/assets/images/play_icon.png");
    ui->player->setPixmap(QPixmap::fromImage(img));
    movie->start();
    ui->monster->setMovie(movie);
    ui->monster->setScaledContents(true);

    playlist->addMedia(QUrl("./sound/backmusic.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    backmusic->setPlaylist(playlist);
    backVolume=ui->volume_body_silderbar->value();
    backmusic->setVolume(backVolume);
    backmusic->play();

    ui->select_item->addItem("");
    ui->shop_select_item->addItem("");
    ui->backpack_gui->setVisible(false);
    ui->shop_gui->setVisible(false);
    ui->setting_gui->setVisible(false);
    ui->volume_gui->setVisible(false);

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
        itemlist.push(file,list[0],list[3],list[1].toInt(),list[2].toInt());
        ui->shop_select_item->addItem(QIcon(":/assets/images/"+file+".png"),list[0]);
    }
    mFile.flush();
    mFile.close();
}
UI_Test_Project::~UI_Test_Project()
{
    delete ui;
}
void UI_Test_Project::timerstart(){
    //exp
    if(ui->monsterHp->value()<=0){
        if(sleep_bool){
            sleepTimer->start(300);
            sleep_bool = false;
        }
        if(!sleepTimer->isActive()){
            initHp();
            if(sleep_bool){
                sleepTimer->start(30);
                sleep_bool = false;
            }
        }
    }
    if(!sleepTimer->isActive()){
        int who=rand()%10+1;
        int monster_atk=monster_note->atk+rand()%(int)(player_note->killcount/10+1)+1;
        int player_atk=player_note->getatk();
        int player_def=player_note->getdef();
        if(who == 1){
            if(player_note->hp<monster_atk){
                playSound("playerdie");
                player_note->hp=0;
                ui->playerHp->setValue(0);
            }else{
                playSound("playerATT");
                player_note->hp-=monster_atk+player_def;
                ui->playerHp->setValue(player_note->gethp());
            }
        }else if(who > 3){
            if(ui->monsterHp->value()<player_atk){
                playSound("bonk");
                monster_note->hp=0;
                ui->monsterHp->setValue(0);
            }else{
                playSound("monsterdie");
                monster_note->hp-=player_atk;
                ui->monsterHp->setValue(monster_note->gethp());
            }
        }
    }
}

void UI_Test_Project::initHp(){
    if(ui->monsterHp->value()<=0){
        player_note->killcount +=1;
        int plusexp=ui->exp_bar->value()+rand()%20+5;
        if(plusexp<=100){
            ui->exp_bar->setValue(plusexp);
        }else{
            playSound("levelup");
            player_note->level +=1;
            ui->level->setText("LV."+QString::number(player_note->level));
            ui->exp_bar->setValue(0);
        }
        monster_note->hp=monster_note->default_hp;
        ui->monsterHp->setValue(monster_note->gethp());
        player_note->hp = player_note->default_hp;
        ui->playerHp->setValue(player_note->gethp());
        sleep_bool = true;
    }
}

void UI_Test_Project::sleep(){
    sleepTimer->stop();
}

void UI_Test_Project::on_startButton_clicked()
{
    clickedButton();
    ui->stopButton->setEnabled(true);
    ui->startButton->setEnabled(false);
    myTimer->start(300);
}


void UI_Test_Project::on_stopButton_clicked()
{
    clickedButton();
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    myTimer->stop();
    initHp();
}

void UI_Test_Project::on_back_clicked()
{
    clickedButton();
    ui->setting_gui->setVisible(false);
    ui->shop_gui->setVisible(false);
    ui->backpack_gui->setVisible(true);
    ui->backpack_gui->setGeometry(40,40,741,381);
}


void UI_Test_Project::on_close_backpack_clicked()
{
    clickedButton();
    ui->backpack_gui->setVisible(false);
}


void UI_Test_Project::on_shopButton_clicked()
{
    clickedButton();
    ui->setting_gui->setVisible(false);
    ui->backpack_gui->setVisible(false);
    ui->shop_gui->setVisible(true);
    ui->shop_gui->setGeometry(40,40,741,381);
}


void UI_Test_Project::on_settingButton_clicked()
{
    clickedButton();
    ui->shop_gui->setVisible(false);
    ui->backpack_gui->setVisible(false);
    ui->setting_gui->setVisible(true);
    ui->setting_gui->setGeometry(280,80,250,300);
}


void UI_Test_Project::on_backtogame_clicked()
{
    clickedButton();
    ui->setting_gui->setVisible(false);
    bigegg_count+=1;
    if(bigegg_count>=5){
        bigegg = true;
    }
}


void UI_Test_Project::on_shop_close_panel_clicked()
{
    clickedButton();
    ui->shop_gui->setVisible(false);
}

void UI_Test_Project::on_endgame_clicked()
{
    playSound("gameover");
}

void UI_Test_Project::on_select_item_activated(const QString &arg1)
{
    clickedButton();
    if(arg1 == ""){
        ui->item_info_panel->setText("");
    }else{
        Equi find = itemlist.find(arg1);
        ui->item_info_panel->setText(QStringLiteral("Name：")+find.name+QStringLiteral("\nAtk：")+QString::number(find.atk)+QStringLiteral("\nDef：")+QString::number(find.def));
    }
}


void UI_Test_Project::on_equi_clicked()
{
    clickedButton();
    QString arg1=ui->select_item->currentText();
    if(arg1 == ""){
        ui->item_info_panel->setText("");
    }else{
        Equi find = itemlist.find(arg1);
        setIcon = find;
        if(find.kind == "weapons"){
            setIcon_weapons = true;
            ui->weapons_1->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
            ui->weapons_2->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
        }else if(find.kind == "armor"){
            setIcon_armors = true;
            ui->armor->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
        }else if(find.kind == "leg"){
            setIcon_leg = true;
            ui->leg->setStyleSheet("border:3px solid yellow;\nborder-radius:16px;\nborder-width:8px;");
        }
    }
}


void UI_Test_Project::on_weapons_1_clicked()
{
    clickedButton();
    if(setIcon_weapons){
        setIcon_weapons = false;
        player_note->set_weapons_1(&setIcon);
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
        clickedButton();
    }
}


void UI_Test_Project::on_weapons_2_clicked()
{
    clickedButton();
    if(setIcon_weapons){
        setIcon_weapons = false;
        player_note->set_weapons_2(&setIcon);
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
       clickedButton();
    }
}


void UI_Test_Project::on_armor_clicked()
{
    clickedButton();
    if(setIcon_armors){
        setIcon_armors = false;
        player_note->set_armor(&setIcon);
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
        clickedButton();
    }
}


void UI_Test_Project::on_leg_clicked()
{
    clickedButton();
    if(setIcon_leg){
        setIcon_leg = false;
        player_note->set_leg(&setIcon);
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
        clickedButton();
    }
}


void UI_Test_Project::on_shop_select_item_activated(const QString &arg1)
{
    clickedButton();
    if(arg1 == ""){
        ui->shop_item_info->setText("");
    }else{
        Equi find = itemlist.find(arg1);
        ui->shop_item_info->setText(QStringLiteral("Name：")+find.name+QStringLiteral("\nAtk：")+QString::number(find.atk)+QStringLiteral("\nDef：")+QString::number(find.def));
    }
}


void UI_Test_Project::on_buy_clicked()
{
    clickedButton();
    if(ui->shop_select_item->currentText() != ""){
        Equi find = itemlist.find(ui->shop_select_item->currentText());
        ui->select_item->addItem(find.icon,find.name);
        if(find.name == "GodSword")
            playSound("GodSword");
    }
}
void UI_Test_Project::playSound(QString url){
    if(url == "gameover"){
        if(bigegg){
            backmusic->setMedia(QUrl("./sound/boss.mp3"));
            QImage img;
            img.load(":/assets/images/meme.png");
            Win->setPixmap(QPixmap::fromImage(img));
            Win->setWindowTitle("meme");
            Win->show();
        }else{
            if(!ui->backmute->checkState())
                backmusic->setMedia(QUrl("./sound/"+url+".mp3"));
            else{
                backmusic->setMedia(QUrl("./sound/click.mp3"));
                backmusic->setVolume(soundVolume);
            }
        }
        backmusic->play();
        end=true;
    }else{
        QMediaPlayer *sound = new QMediaPlayer();
        sound->setMedia(QUrl("./sound/"+url+".mp3"));
        sound->setVolume(soundVolume);
        sound->play();
    }
}
void UI_Test_Project::getduration(){
    if(backmusic->duration()!=0){
        if(end){
            _sleep(backmusic->duration());
            close();
            Win->close();
        }
    }
}
void UI_Test_Project::clickedButton(){
    if(bigegg){
        playSound("a");
    }else{
        playSound("click");
    }
}


void UI_Test_Project::on_volumesetting_clicked(){
    clickedButton();
    ui->shop_gui->setVisible(false);
    ui->backpack_gui->setVisible(false);
    ui->volume_gui->setVisible(true);
    ui->volume_gui->setGeometry(155,45,500,381);
}

void UI_Test_Project::on_volume_close_btn_clicked(){
    clickedButton();
    ui->volume_gui->setVisible(false);
}

void UI_Test_Project::setsoundVolume(){
    clickedButton();
    if(!ui->soundmute->checkState()){
        soundVolume = ui->volume_sounds_silderbar->value();
    }
}

void UI_Test_Project::setbackVolume(){
    clickedButton();
    if(!ui->backmute->checkState()){
        backVolume = ui->volume_body_silderbar->value();
    }
    backmusic->setVolume(backVolume);
}

void UI_Test_Project::on_soundmute_stateChanged()
{
    clickedButton();
    if(ui->soundmute->checkState()){
        soundVolume = 0;
    }else{
        soundVolume = ui->volume_sounds_silderbar->value();
    }
}


void UI_Test_Project::on_backmute_stateChanged()
{
    clickedButton();
    if(ui->backmute->checkState()){
        backVolume = 0;
        backmusic->stop();
    }else{
        backVolume = ui->volume_body_silderbar->value();
        backmusic->play();
    }
    backmusic->setVolume(backVolume);
}

