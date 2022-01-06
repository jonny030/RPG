/********************************************************************************
** Form generated from reading UI file 'ui_test_project.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TEST_PROJECT_H
#define UI_UI_TEST_PROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_Test_Project
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *playerButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *shopButton;
    QPushButton *back;
    QPushButton *settingButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *username;
    QLabel *MpText;
    QProgressBar *MpBar;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QProgressBar *playerHp;
    QLabel *player;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QProgressBar *monsterHp;
    QLabel *monster;
    QProgressBar *exp_bar;
    QFrame *backpack_gui;
    QHBoxLayout *_2;
    QFrame *equipment_layout;
    QVBoxLayout *equipment;
    QPushButton *armor;
    QPushButton *leg;
    QPushButton *weapons_1;
    QPushButton *weapons_2;
    QFrame *item_info;
    QVBoxLayout *_3;
    QFrame *backpack_action_bar;
    QHBoxLayout *_4;
    QComboBox *select_item;
    QPushButton *close_backpack;
    QLabel *item_info_panel;
    QFrame *item_action_btn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *equi;
    QFrame *shop_gui;
    QHBoxLayout *_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *shop_select_bar;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *shop_select_item;
    QPushButton *resetshop;
    QFrame *shop_item_panel;
    QVBoxLayout *verticalLayout_4;
    QLabel *shop_item_info;
    QFrame *shop_action;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buy;
    QPushButton *shop_close_panel;
    QFrame *setting_gui;
    QHBoxLayout *_6;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *backtogame;
    QPushButton *gamesaves;
    QPushButton *volumesetting;
    QPushButton *endgame;
    QFrame *volume_gui;
    QHBoxLayout *_7;
    QFrame *volume_main;
    QVBoxLayout *_8;
    QHBoxLayout *volume_sounds_frame;
    QLabel *volume_sounds_text;
    QCheckBox *soundmute;
    QSpinBox *volume_sounds_spinBox;
    QSlider *volume_sounds_silderbar;
    QHBoxLayout *volume_body_frame;
    QLabel *volume_body_text;
    QCheckBox *backmute;
    QSpinBox *volume_body_spinBox;
    QSlider *volume_body_silderbar;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *volume_close_btn;
    QLabel *level;
    QFrame *select_Professional;
    QHBoxLayout *_9;
    QFrame *horizontalFrame_3;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *space1;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *Swordsman;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QPushButton *Priest;
    QLabel *money;
    QLabel *skills;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *startButton;
    QPushButton *skillsbtu;
    QPushButton *stopButton;
    QLabel *monster_Collision;

    void setupUi(QMainWindow *UI_Test_Project)
    {
        if (UI_Test_Project->objectName().isEmpty())
            UI_Test_Project->setObjectName(QString::fromUtf8("UI_Test_Project"));
        UI_Test_Project->setEnabled(true);
        UI_Test_Project->resize(808, 487);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UI_Test_Project->sizePolicy().hasHeightForWidth());
        UI_Test_Project->setSizePolicy(sizePolicy);
        UI_Test_Project->setStyleSheet(QString::fromUtf8("background:url(:/assets/images/tumblr_p7k8f3fMWS1wvbydeo1_1280.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"QProgressBar::chunk {background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #78d,stop: 0.4999 #46a,stop: 0.5 #45a,stop: 1 #238 );border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: 1px solid black;}"));
        UI_Test_Project->setAnimated(true);
        centralwidget = new QWidget(UI_Test_Project);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background:transparent;"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 781, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        playerButton = new QPushButton(verticalLayoutWidget);
        playerButton->setObjectName(QString::fromUtf8("playerButton"));
        playerButton->setEnabled(true);
        playerButton->setMinimumSize(QSize(200, 68));
        playerButton->setMaximumSize(QSize(16777215, 88));
        playerButton->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/profile.png);\n"
"background-size:100% 100%;\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:200px;\n"
"min-height:90px;\n"
"position: relative;"));
        playerButton->setCheckable(false);
        playerButton->setFlat(false);

        horizontalLayout_4->addWidget(playerButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        shopButton = new QPushButton(verticalLayoutWidget);
        shopButton->setObjectName(QString::fromUtf8("shopButton"));
        shopButton->setMinimumSize(QSize(80, 21));
        shopButton->setMaximumSize(QSize(16777215, 80));
        shopButton->setCursor(QCursor(Qt::ArrowCursor));
        shopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/assets/images/btnbg2.png);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/images/store-solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        shopButton->setIcon(icon);

        horizontalLayout_4->addWidget(shopButton);

        back = new QPushButton(verticalLayoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(80, 20));
        back->setMaximumSize(QSize(16777215, 80));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/assets/images/btnbg2.png);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/images/backpack_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon1);

        horizontalLayout_4->addWidget(back);

        settingButton = new QPushButton(verticalLayoutWidget);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setMinimumSize(QSize(80, 20));
        settingButton->setMaximumSize(QSize(16777215, 80));
        settingButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/assets/images/btnbg2.png);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/images/cog-solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingButton->setIcon(icon2);

        horizontalLayout_4->addWidget(settingButton);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(7, 14, 161, 61));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMaximumSize(QSize(16777215, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(10);
        username->setFont(font);
        username->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(username);

        MpText = new QLabel(layoutWidget);
        MpText->setObjectName(QString::fromUtf8("MpText"));
        MpText->setMaximumSize(QSize(16777215, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        MpText->setFont(font1);

        verticalLayout_2->addWidget(MpText);

        MpBar = new QProgressBar(layoutWidget);
        MpBar->setObjectName(QString::fromUtf8("MpBar"));
        MpBar->setMaximumSize(QSize(16777215, 19));
        MpBar->setFont(font1);
        MpBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	text-align:center;\n"
"	color:black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00AEAE;\n"
"}"));
        MpBar->setValue(0);

        verticalLayout_2->addWidget(MpBar);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 160, 171, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        playerHp = new QProgressBar(gridLayoutWidget);
        playerHp->setObjectName(QString::fromUtf8("playerHp"));
        playerHp->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	text-align:center;\n"
"	color:black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #FF0000;\n"
"}"));
        playerHp->setValue(100);
        playerHp->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(playerHp, 0, 1, 1, 1);

        player = new QLabel(gridLayoutWidget);
        player->setObjectName(QString::fromUtf8("player"));
        player->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(player, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(590, 160, 163, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        monsterHp = new QProgressBar(gridLayoutWidget_2);
        monsterHp->setObjectName(QString::fromUtf8("monsterHp"));
        monsterHp->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	text-align:center;\n"
"	color:black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #FF0000;\n"
"}"));
        monsterHp->setValue(100);
        monsterHp->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(monsterHp, 0, 1, 1, 1);

        monster = new QLabel(gridLayoutWidget_2);
        monster->setObjectName(QString::fromUtf8("monster"));
        monster->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(monster, 1, 1, 1, 1);

        exp_bar = new QProgressBar(centralwidget);
        exp_bar->setObjectName(QString::fromUtf8("exp_bar"));
        exp_bar->setGeometry(QRect(10, 460, 791, 16));
        exp_bar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	text-align:center;\n"
"	color:black;\n"
"	font: 14px bold;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00FF00;\n"
"    width: 10px;\n"
"    margin: 0.5px;\n"
"}"));
        exp_bar->setValue(0);
        backpack_gui = new QFrame(centralwidget);
        backpack_gui->setObjectName(QString::fromUtf8("backpack_gui"));
        backpack_gui->setGeometry(QRect(30, 1000, 741, 381));
        backpack_gui->setMinimumSize(QSize(741, 381));
        backpack_gui->setBaseSize(QSize(0, 0));
        backpack_gui->setLayoutDirection(Qt::LeftToRight);
        backpack_gui->setAutoFillBackground(false);
        backpack_gui->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border-radius:16px;\n"
"border:solid black 3px;"));
        _2 = new QHBoxLayout(backpack_gui);
        _2->setObjectName(QString::fromUtf8("_2"));
        equipment_layout = new QFrame(backpack_gui);
        equipment_layout->setObjectName(QString::fromUtf8("equipment_layout"));
        equipment_layout->setMaximumSize(QSize(134, 16777215));
        equipment_layout->setStyleSheet(QString::fromUtf8("min-width:100px;\n"
"background-color: gray;\n"
"border:solid black 3px;"));
        equipment = new QVBoxLayout(equipment_layout);
        equipment->setObjectName(QString::fromUtf8("equipment"));
        armor = new QPushButton(equipment_layout);
        armor->setObjectName(QString::fromUtf8("armor"));
        sizePolicy.setHeightForWidth(armor->sizePolicy().hasHeightForWidth());
        armor->setSizePolicy(sizePolicy);
        armor->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        armor->setIconSize(QSize(100, 60));

        equipment->addWidget(armor);

        leg = new QPushButton(equipment_layout);
        leg->setObjectName(QString::fromUtf8("leg"));
        sizePolicy.setHeightForWidth(leg->sizePolicy().hasHeightForWidth());
        leg->setSizePolicy(sizePolicy);
        leg->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        leg->setIconSize(QSize(100, 60));

        equipment->addWidget(leg);

        weapons_1 = new QPushButton(equipment_layout);
        weapons_1->setObjectName(QString::fromUtf8("weapons_1"));
        sizePolicy.setHeightForWidth(weapons_1->sizePolicy().hasHeightForWidth());
        weapons_1->setSizePolicy(sizePolicy);
        weapons_1->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        weapons_1->setIconSize(QSize(100, 60));

        equipment->addWidget(weapons_1);

        weapons_2 = new QPushButton(equipment_layout);
        weapons_2->setObjectName(QString::fromUtf8("weapons_2"));
        sizePolicy.setHeightForWidth(weapons_2->sizePolicy().hasHeightForWidth());
        weapons_2->setSizePolicy(sizePolicy);
        weapons_2->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        weapons_2->setIconSize(QSize(100, 60));

        equipment->addWidget(weapons_2);


        _2->addWidget(equipment_layout);

        item_info = new QFrame(backpack_gui);
        item_info->setObjectName(QString::fromUtf8("item_info"));
        item_info->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        _3 = new QVBoxLayout(item_info);
        _3->setObjectName(QString::fromUtf8("_3"));
        backpack_action_bar = new QFrame(item_info);
        backpack_action_bar->setObjectName(QString::fromUtf8("backpack_action_bar"));
        backpack_action_bar->setMinimumSize(QSize(0, 32));
        backpack_action_bar->setMaximumSize(QSize(16777215, 58));
        backpack_action_bar->setStyleSheet(QString::fromUtf8(""));
        _4 = new QHBoxLayout(backpack_action_bar);
        _4->setObjectName(QString::fromUtf8("_4"));
        select_item = new QComboBox(backpack_action_bar);
        select_item->setObjectName(QString::fromUtf8("select_item"));
        select_item->setMinimumSize(QSize(0, 38));
        select_item->setMaximumSize(QSize(16777215, 68));
        select_item->setCursor(QCursor(Qt::PointingHandCursor));
        select_item->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border:solid 3px rgb(0, 0, 0);\n"
"background:white;\n"
"border-width:8px;\n"
"border-radius:16px;\n"
"padding-left:8px;\n"
"font-size:16px \"SimHei\";\n"
"}  \n"
"\n"
"QComboBox QAbstractItemView {\n"
"border:solid 3px rgb(0, 0, 0);\n"
"background:white;\n"
"border-width:8px;\n"
"border-radius:0px !important;\n"
"padding-left:8px;\n"
"font-size:16px \"SimHei\";\n"
"}\n"
"\n"
" QComboBox::drop-down{\n"
"width: 40px;\n"
"border-left: 1px solid #ffffff; \n"
"}    \n"
""));

        _4->addWidget(select_item);

        close_backpack = new QPushButton(backpack_action_bar);
        close_backpack->setObjectName(QString::fromUtf8("close_backpack"));
        close_backpack->setMinimumSize(QSize(72, 40));
        close_backpack->setMaximumSize(QSize(72, 43));
        close_backpack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 4px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:24px;\n"
"	min-height:24px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        _4->addWidget(close_backpack);


        _3->addWidget(backpack_action_bar);

        item_info_panel = new QLabel(item_info);
        item_info_panel->setObjectName(QString::fromUtf8("item_info_panel"));
        QFont font2;
        font2.setPointSize(16);
        item_info_panel->setFont(font2);
        item_info_panel->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        item_info_panel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        _3->addWidget(item_info_panel);

        item_action_btn = new QFrame(item_info);
        item_action_btn->setObjectName(QString::fromUtf8("item_action_btn"));
        item_action_btn->setMaximumSize(QSize(16777215, 51));
        item_action_btn->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(item_action_btn);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        equi = new QPushButton(item_action_btn);
        equi->setObjectName(QString::fromUtf8("equi"));
        equi->setMinimumSize(QSize(96, 40));
        equi->setMaximumSize(QSize(16777215, 46));
        equi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:24px;\n"
"	min-height:24px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_2->addWidget(equi);


        _3->addWidget(item_action_btn);


        _2->addWidget(item_info);

        shop_gui = new QFrame(centralwidget);
        shop_gui->setObjectName(QString::fromUtf8("shop_gui"));
        shop_gui->setGeometry(QRect(40, 1000, 741, 381));
        shop_gui->setMinimumSize(QSize(741, 381));
        shop_gui->setBaseSize(QSize(0, 0));
        shop_gui->setLayoutDirection(Qt::LeftToRight);
        shop_gui->setAutoFillBackground(false);
        shop_gui->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border-radius:16px;\n"
"border:solid black 3px;"));
        _5 = new QHBoxLayout(shop_gui);
        _5->setObjectName(QString::fromUtf8("_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        shop_select_bar = new QFrame(shop_gui);
        shop_select_bar->setObjectName(QString::fromUtf8("shop_select_bar"));
        shop_select_bar->setMaximumSize(QSize(16777215, 56));
        shop_select_bar->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        horizontalLayout_3 = new QHBoxLayout(shop_select_bar);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        shop_select_item = new QComboBox(shop_select_bar);
        shop_select_item->setObjectName(QString::fromUtf8("shop_select_item"));
        shop_select_item->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border:solid 3px rgb(0, 0, 0);\n"
"background:white;\n"
"border-width:8px;\n"
"border-radius:16px;\n"
"padding-left:8px;\n"
"font-size:16px \"SimHei\";\n"
"}  \n"
"\n"
"QComboBox QAbstractItemView {\n"
"border:solid 3px rgb(0, 0, 0);\n"
"background:white;\n"
"border-width:8px;\n"
"border-radius:0px !important;\n"
"padding-left:8px;\n"
"font-size:16px \"SimHei\";\n"
"}\n"
"\n"
" QComboBox::drop-down{\n"
"width: 40px;\n"
"border-left: 1px solid #ffffff; \n"
"}    \n"
""));

        horizontalLayout_3->addWidget(shop_select_item);

        resetshop = new QPushButton(shop_select_bar);
        resetshop->setObjectName(QString::fromUtf8("resetshop"));
        resetshop->setMaximumSize(QSize(140, 16777215));
        resetshop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:24px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_3->addWidget(resetshop);


        verticalLayout_3->addWidget(shop_select_bar);

        shop_item_panel = new QFrame(shop_gui);
        shop_item_panel->setObjectName(QString::fromUtf8("shop_item_panel"));
        shop_item_panel->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        verticalLayout_4 = new QVBoxLayout(shop_item_panel);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        shop_item_info = new QLabel(shop_item_panel);
        shop_item_info->setObjectName(QString::fromUtf8("shop_item_info"));
        shop_item_info->setFont(font2);
        shop_item_info->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        verticalLayout_4->addWidget(shop_item_info);


        verticalLayout_3->addWidget(shop_item_panel);

        shop_action = new QFrame(shop_gui);
        shop_action->setObjectName(QString::fromUtf8("shop_action"));
        shop_action->setMaximumSize(QSize(16777215, 54));
        shop_action->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        horizontalLayout_5 = new QHBoxLayout(shop_action);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buy = new QPushButton(shop_action);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_5->addWidget(buy);

        shop_close_panel = new QPushButton(shop_action);
        shop_close_panel->setObjectName(QString::fromUtf8("shop_close_panel"));
        shop_close_panel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_5->addWidget(shop_close_panel);


        verticalLayout_3->addWidget(shop_action);


        _5->addLayout(verticalLayout_3);

        setting_gui = new QFrame(centralwidget);
        setting_gui->setObjectName(QString::fromUtf8("setting_gui"));
        setting_gui->setGeometry(QRect(280, 1000, 250, 300));
        setting_gui->setMinimumSize(QSize(250, 300));
        setting_gui->setMaximumSize(QSize(0, 0));
        setting_gui->setBaseSize(QSize(0, 0));
        setting_gui->setLayoutDirection(Qt::LeftToRight);
        setting_gui->setAutoFillBackground(false);
        setting_gui->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border-radius:16px;\n"
"border:solid black 3px;"));
        _6 = new QHBoxLayout(setting_gui);
        _6->setObjectName(QString::fromUtf8("_6"));
        verticalFrame_3 = new QFrame(setting_gui);
        verticalFrame_3->setObjectName(QString::fromUtf8("verticalFrame_3"));
        verticalFrame_3->setStyleSheet(QString::fromUtf8("background:gray;\n"
""));
        verticalLayout_5 = new QVBoxLayout(verticalFrame_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        backtogame = new QPushButton(verticalFrame_3);
        backtogame->setObjectName(QString::fromUtf8("backtogame"));
        backtogame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        verticalLayout_5->addWidget(backtogame);

        gamesaves = new QPushButton(verticalFrame_3);
        gamesaves->setObjectName(QString::fromUtf8("gamesaves"));
        gamesaves->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        verticalLayout_5->addWidget(gamesaves);

        volumesetting = new QPushButton(verticalFrame_3);
        volumesetting->setObjectName(QString::fromUtf8("volumesetting"));
        volumesetting->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        verticalLayout_5->addWidget(volumesetting);

        endgame = new QPushButton(verticalFrame_3);
        endgame->setObjectName(QString::fromUtf8("endgame"));
        endgame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:20px;\n"
"	min-height:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        verticalLayout_5->addWidget(endgame);


        _6->addWidget(verticalFrame_3);

        volume_gui = new QFrame(centralwidget);
        volume_gui->setObjectName(QString::fromUtf8("volume_gui"));
        volume_gui->setGeometry(QRect(155, 1000, 500, 381));
        volume_gui->setMinimumSize(QSize(500, 381));
        volume_gui->setMaximumSize(QSize(500, 381));
        volume_gui->setBaseSize(QSize(0, 0));
        volume_gui->setLayoutDirection(Qt::LeftToRight);
        volume_gui->setAutoFillBackground(false);
        volume_gui->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"border-radius:16px;\n"
"border:solid black 3px;"));
        _7 = new QHBoxLayout(volume_gui);
        _7->setObjectName(QString::fromUtf8("_7"));
        volume_main = new QFrame(volume_gui);
        volume_main->setObjectName(QString::fromUtf8("volume_main"));
        volume_main->setStyleSheet(QString::fromUtf8("border:solid 5px black;\n"
"background:gray;\n"
"color:white;"));
        _8 = new QVBoxLayout(volume_main);
        _8->setObjectName(QString::fromUtf8("_8"));
        volume_sounds_frame = new QHBoxLayout();
        volume_sounds_frame->setObjectName(QString::fromUtf8("volume_sounds_frame"));
        volume_sounds_text = new QLabel(volume_main);
        volume_sounds_text->setObjectName(QString::fromUtf8("volume_sounds_text"));
        volume_sounds_text->setMinimumSize(QSize(120, 0));
        volume_sounds_text->setAlignment(Qt::AlignCenter);

        volume_sounds_frame->addWidget(volume_sounds_text);

        soundmute = new QCheckBox(volume_main);
        soundmute->setObjectName(QString::fromUtf8("soundmute"));

        volume_sounds_frame->addWidget(soundmute);

        volume_sounds_spinBox = new QSpinBox(volume_main);
        volume_sounds_spinBox->setObjectName(QString::fromUtf8("volume_sounds_spinBox"));
        volume_sounds_spinBox->setMaximum(100);
        volume_sounds_spinBox->setValue(50);

        volume_sounds_frame->addWidget(volume_sounds_spinBox);

        volume_sounds_silderbar = new QSlider(volume_main);
        volume_sounds_silderbar->setObjectName(QString::fromUtf8("volume_sounds_silderbar"));
        volume_sounds_silderbar->setMaximum(100);
        volume_sounds_silderbar->setValue(50);
        volume_sounds_silderbar->setOrientation(Qt::Horizontal);

        volume_sounds_frame->addWidget(volume_sounds_silderbar);


        _8->addLayout(volume_sounds_frame);

        volume_body_frame = new QHBoxLayout();
        volume_body_frame->setObjectName(QString::fromUtf8("volume_body_frame"));
        volume_body_text = new QLabel(volume_main);
        volume_body_text->setObjectName(QString::fromUtf8("volume_body_text"));
        volume_body_text->setMinimumSize(QSize(120, 0));
        volume_body_text->setAlignment(Qt::AlignCenter);

        volume_body_frame->addWidget(volume_body_text);

        backmute = new QCheckBox(volume_main);
        backmute->setObjectName(QString::fromUtf8("backmute"));

        volume_body_frame->addWidget(backmute);

        volume_body_spinBox = new QSpinBox(volume_main);
        volume_body_spinBox->setObjectName(QString::fromUtf8("volume_body_spinBox"));
        volume_body_spinBox->setMaximum(100);
        volume_body_spinBox->setValue(30);

        volume_body_frame->addWidget(volume_body_spinBox);

        volume_body_silderbar = new QSlider(volume_main);
        volume_body_silderbar->setObjectName(QString::fromUtf8("volume_body_silderbar"));
        volume_body_silderbar->setMaximum(100);
        volume_body_silderbar->setValue(30);
        volume_body_silderbar->setSliderPosition(30);
        volume_body_silderbar->setOrientation(Qt::Horizontal);

        volume_body_frame->addWidget(volume_body_silderbar);


        _8->addLayout(volume_body_frame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        volume_close_btn = new QPushButton(volume_main);
        volume_close_btn->setObjectName(QString::fromUtf8("volume_close_btn"));
        volume_close_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:8px;\n"
"    color:black;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_6->addWidget(volume_close_btn);


        _8->addLayout(horizontalLayout_6);


        _7->addWidget(volume_main);

        level = new QLabel(centralwidget);
        level->setObjectName(QString::fromUtf8("level"));
        level->setGeometry(QRect(110, 130, 61, 21));
        level->setFont(font2);
        select_Professional = new QFrame(centralwidget);
        select_Professional->setObjectName(QString::fromUtf8("select_Professional"));
        select_Professional->setEnabled(true);
        select_Professional->setGeometry(QRect(0, 1000, 810, 498));
        select_Professional->setMinimumSize(QSize(810, 498));
        select_Professional->setMaximumSize(QSize(0, 0));
        select_Professional->setBaseSize(QSize(0, 0));
        select_Professional->setLayoutDirection(Qt::LeftToRight);
        select_Professional->setAutoFillBackground(false);
        select_Professional->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/select_bg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: local;\n"
"background-position: center;\n"
"  background-clip: border-box;  "));
        _9 = new QHBoxLayout(select_Professional);
        _9->setObjectName(QString::fromUtf8("_9"));
        horizontalFrame_3 = new QFrame(select_Professional);
        horizontalFrame_3->setObjectName(QString::fromUtf8("horizontalFrame_3"));
        horizontalFrame_3->setMinimumSize(QSize(0, 0));
        horizontalFrame_3->setMaximumSize(QSize(25, 16777215));
        horizontalFrame_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        horizontalLayout_12 = new QHBoxLayout(horizontalFrame_3);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));

        _9->addWidget(horizontalFrame_3);

        space1 = new QVBoxLayout();
        space1->setObjectName(QString::fromUtf8("space1"));
        verticalSpacer = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        space1->addItem(verticalSpacer);

        label = new QLabel(select_Professional);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\250\231\346\245\267\351\253\224"));
        font3.setPointSize(24);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label->setAlignment(Qt::AlignCenter);

        space1->addWidget(label);

        Swordsman = new QPushButton(select_Professional);
        Swordsman->setObjectName(QString::fromUtf8("Swordsman"));
        Swordsman->setMinimumSize(QSize(0, 214));
        Swordsman->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:transparent;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:transparent;\n"
"}"));

        space1->addWidget(Swordsman);


        _9->addLayout(space1);

        horizontalFrame = new QFrame(select_Professional);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setMinimumSize(QSize(40, 0));
        horizontalFrame->setMaximumSize(QSize(142, 16777215));
        horizontalFrame->setStyleSheet(QString::fromUtf8("background:transparent;"));
        horizontalLayout_7 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        label_3 = new QLabel(horizontalFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_3);

        nameEdit = new QLineEdit(horizontalFrame);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMaxLength(5);
        nameEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(nameEdit);

        label_4 = new QLabel(horizontalFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);


        horizontalLayout_7->addLayout(verticalLayout_7);


        _9->addWidget(horizontalFrame);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        label_2 = new QLabel(select_Professional);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        Priest = new QPushButton(select_Professional);
        Priest->setObjectName(QString::fromUtf8("Priest"));
        Priest->setMinimumSize(QSize(0, 214));
        Priest->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:transparent;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:6px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:transparent;\n"
"}"));

        verticalLayout_6->addWidget(Priest);


        _9->addLayout(verticalLayout_6);

        money = new QLabel(centralwidget);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(40, 380, 701, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(14);
        money->setFont(font5);
        skills = new QLabel(centralwidget);
        skills->setObjectName(QString::fromUtf8("skills"));
        skills->setGeometry(QRect(230, 260, 71, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font6.setPointSize(14);
        skills->setFont(font6);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 410, 231, 42));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(layoutWidget1);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/images/play-button2.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon3);
        startButton->setIconSize(QSize(20, 20));

        horizontalLayout_8->addWidget(startButton);

        skillsbtu = new QPushButton(layoutWidget1);
        skillsbtu->setObjectName(QString::fromUtf8("skillsbtu"));
        skillsbtu->setEnabled(false);
        skillsbtu->setAutoFillBackground(false);
        skillsbtu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 255);\n"
"	padding:4px 16px;\n"
"	margin:0px 16px;\n"
"	border-radius:16px;\n"
"	border:solid 3px black;\n"
"	border-width:4px;\n"
"	min-width:24px;\n"
"	min-height:24px;\n"
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        horizontalLayout_8->addWidget(skillsbtu);

        stopButton = new QPushButton(layoutWidget1);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/images/stop2.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon4);
        stopButton->setIconSize(QSize(25, 25));

        horizontalLayout_8->addWidget(stopButton);

        monster_Collision = new QLabel(centralwidget);
        monster_Collision->setObjectName(QString::fromUtf8("monster_Collision"));
        monster_Collision->setGeometry(QRect(580, 150, 181, 251));
        UI_Test_Project->setCentralWidget(centralwidget);
        layoutWidget->raise();
        money->raise();
        skills->raise();
        level->raise();
        verticalLayoutWidget->raise();
        layoutWidget->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        exp_bar->raise();
        setting_gui->raise();
        volume_gui->raise();
        select_Professional->raise();
        shop_gui->raise();
        backpack_gui->raise();
        monster_Collision->raise();

        retranslateUi(UI_Test_Project);
        QObject::connect(volume_sounds_spinBox, SIGNAL(valueChanged(int)), volume_sounds_silderbar, SLOT(setValue(int)));
        QObject::connect(volume_sounds_silderbar, SIGNAL(valueChanged(int)), volume_sounds_spinBox, SLOT(setValue(int)));
        QObject::connect(volume_body_spinBox, SIGNAL(valueChanged(int)), volume_body_silderbar, SLOT(setValue(int)));
        QObject::connect(volume_body_silderbar, SIGNAL(valueChanged(int)), volume_body_spinBox, SLOT(setValue(int)));

        playerButton->setDefault(false);


        QMetaObject::connectSlotsByName(UI_Test_Project);
    } // setupUi

    void retranslateUi(QMainWindow *UI_Test_Project)
    {
        UI_Test_Project->setWindowTitle(QApplication::translate("UI_Test_Project", "UI_Test_Project", nullptr));
        playerButton->setText(QString());
        shopButton->setText(QString());
        back->setText(QString());
        settingButton->setText(QString());
        username->setText(QApplication::translate("UI_Test_Project", "\347\216\251\345\256\266\357\274\232Test", nullptr));
        MpText->setText(QApplication::translate("UI_Test_Project", "MP:100/100", nullptr));
        player->setText(QApplication::translate("UI_Test_Project", "\347\216\251\345\256\266", nullptr));
        monster->setText(QApplication::translate("UI_Test_Project", "\346\200\252\347\211\251", nullptr));
        armor->setText(QApplication::translate("UI_Test_Project", "\350\255\267\347\224\262\345\215\200\345\241\212", nullptr));
        leg->setText(QApplication::translate("UI_Test_Project", "\350\255\267\350\205\277\345\215\200\345\241\212", nullptr));
        weapons_1->setText(QApplication::translate("UI_Test_Project", "\344\270\273\346\211\213\346\255\246\345\231\250", nullptr));
        weapons_2->setText(QApplication::translate("UI_Test_Project", "\345\211\257\346\211\213\346\255\246\345\231\250", nullptr));
        close_backpack->setText(QApplication::translate("UI_Test_Project", "X", nullptr));
        item_info_panel->setText(QString());
        equi->setText(QApplication::translate("UI_Test_Project", "\350\243\235\345\202\231", nullptr));
        resetshop->setText(QApplication::translate("UI_Test_Project", "\345\210\267\346\226\260\345\225\206\345\272\227", nullptr));
        shop_item_info->setText(QString());
        buy->setText(QApplication::translate("UI_Test_Project", "\350\263\274\350\262\267", nullptr));
        shop_close_panel->setText(QApplication::translate("UI_Test_Project", "\351\227\234\351\226\211", nullptr));
        backtogame->setText(QApplication::translate("UI_Test_Project", "\350\277\224\345\233\236\351\201\212\346\210\262", nullptr));
        gamesaves->setText(QApplication::translate("UI_Test_Project", "\351\201\212\346\210\262\347\264\200\351\214\204", nullptr));
        volumesetting->setText(QApplication::translate("UI_Test_Project", "\350\201\262\351\237\263\350\250\255\345\256\232", nullptr));
        endgame->setText(QApplication::translate("UI_Test_Project", "\347\265\220\346\235\237\351\201\212\346\210\262", nullptr));
        volume_sounds_text->setText(QApplication::translate("UI_Test_Project", "\351\237\263\346\225\210\350\250\255\345\256\232", nullptr));
        soundmute->setText(QApplication::translate("UI_Test_Project", "\351\235\234\351\237\263", nullptr));
        volume_body_text->setText(QApplication::translate("UI_Test_Project", "\350\203\214\346\231\257\350\250\255\345\256\232", nullptr));
        backmute->setText(QApplication::translate("UI_Test_Project", "\351\235\234\351\237\263", nullptr));
        volume_close_btn->setText(QApplication::translate("UI_Test_Project", "\351\227\234\351\226\211", nullptr));
        level->setText(QApplication::translate("UI_Test_Project", "LV.1", nullptr));
        label->setText(QApplication::translate("UI_Test_Project", "\345\210\272\345\256\242", nullptr));
        Swordsman->setText(QString());
        label_3->setText(QApplication::translate("UI_Test_Project", "\350\253\213\350\274\270\345\205\245\347\216\251\345\256\266\345\220\215\347\250\261", nullptr));
        nameEdit->setPlaceholderText(QApplication::translate("UI_Test_Project", "\351\240\220\350\250\255:\345\260\217\345\217\257\346\204\233", nullptr));
        label_4->setText(QApplication::translate("UI_Test_Project", "(\346\234\200\345\244\232\344\272\224\345\200\213\345\255\227)", nullptr));
        label_2->setText(QApplication::translate("UI_Test_Project", "\347\211\247\345\270\253", nullptr));
        Priest->setText(QString());
        money->setText(QApplication::translate("UI_Test_Project", "$0", nullptr));
        skills->setText(QApplication::translate("UI_Test_Project", "\347\201\253\347\220\203", nullptr));
        startButton->setText(QString());
        skillsbtu->setText(QApplication::translate("UI_Test_Project", "\346\212\200\350\203\275", nullptr));
        stopButton->setText(QString());
        monster_Collision->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UI_Test_Project: public Ui_UI_Test_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TEST_PROJECT_H
