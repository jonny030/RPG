/********************************************************************************
** Form generated from reading UI file 'ui_test_project.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TEST_PROJECT_H
#define UI_UI_TEST_PROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QLabel *status;
    QProgressBar *progressBar;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QProgressBar *playerHp;
    QLabel *player;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_2;
    QProgressBar *monsterHp;
    QLabel *monster;
    QProgressBar *exp_bar;
    QPushButton *startButton;
    QPushButton *stopButton;
    QFrame *backpack_gui;
    QHBoxLayout *_2;
    QFrame *equipment_layout;
    QVBoxLayout *equipment;
    QLabel *chest_item;
    QLabel *leg_item;
    QLabel *hand;
    QLabel *offhand;
    QFrame *item_info;
    QVBoxLayout *_3;
    QFrame *backpack_action_bar;
    QHBoxLayout *_4;
    QComboBox *select_item;
    QPushButton *close_backpack;
    QLabel *item_info_panel;
    QFrame *item_action_btn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *shop_gui;
    QHBoxLayout *_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *shop_select_bar;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *shop_select_item;
    QPushButton *shop_refresh;
    QFrame *shop_item_panel;
    QVBoxLayout *verticalLayout_4;
    QLabel *shop_item_info;
    QFrame *shop_action;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *shop_buy_item;
    QPushButton *shop_close_panel;
    QFrame *setting_gui;
    QHBoxLayout *_6;
    QFrame *verticalFrame_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *backtogame;
    QPushButton *gamesaves;
    QPushButton *volumesetting;
    QPushButton *endgame;

    void setupUi(QMainWindow *UI_Test_Project)
    {
        if (UI_Test_Project->objectName().isEmpty())
            UI_Test_Project->setObjectName(QString::fromUtf8("UI_Test_Project"));
        UI_Test_Project->setEnabled(true);
        UI_Test_Project->resize(808, 481);
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
        verticalLayoutWidget->setGeometry(QRect(0, 0, 781, 108));
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
        playerButton->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/profile.png);\n"
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
        shopButton->setCursor(QCursor(Qt::ArrowCursor));
        shopButton->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/images/store-solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        shopButton->setIcon(icon);

        horizontalLayout_4->addWidget(shopButton);

        back = new QPushButton(verticalLayoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/images/backpack_black_24dp.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon1);

        horizontalLayout_4->addWidget(back);

        settingButton = new QPushButton(verticalLayoutWidget);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/images/btnbg.png);\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"background-position: center;\n"
"border:unset;\n"
"min-width:80px;\n"
"min-height:100px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/images/cog-solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingButton->setIcon(icon2);

        horizontalLayout_4->addWidget(settingButton);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(7, 22, 161, 66));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224")});
        font.setPointSize(12);
        username->setFont(font);
        username->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(username);

        status = new QLabel(layoutWidget);
        status->setObjectName(QString::fromUtf8("status"));

        verticalLayout_2->addWidget(status);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	text-align:center;\n"
"	color:black;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #00AEAE;\n"
"}"));
        progressBar->setValue(100);

        verticalLayout_2->addWidget(progressBar);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 160, 163, 231));
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

        gridFrame_2 = new QFrame(centralwidget);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        gridFrame_2->setGeometry(QRect(553, 160, 218, 231));
        gridFrame_2->setToolTipDuration(-1);
        gridFrame_2->setLineWidth(1);
        gridLayout_2 = new QGridLayout(gridFrame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        monsterHp = new QProgressBar(gridFrame_2);
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

        monster = new QLabel(gridFrame_2);
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
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(310, 420, 61, 31));
        startButton->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/images/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon3);
        startButton->setIconSize(QSize(20, 20));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(400, 420, 61, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/images/stop2.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon4);
        stopButton->setIconSize(QSize(25, 25));
        backpack_gui = new QFrame(centralwidget);
        backpack_gui->setObjectName(QString::fromUtf8("backpack_gui"));
        backpack_gui->setGeometry(QRect(40, 500, 741, 381));
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
        chest_item = new QLabel(equipment_layout);
        chest_item->setObjectName(QString::fromUtf8("chest_item"));
        chest_item->setCursor(QCursor(Qt::PointingHandCursor));
        chest_item->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        chest_item->setAlignment(Qt::AlignCenter);

        equipment->addWidget(chest_item);

        leg_item = new QLabel(equipment_layout);
        leg_item->setObjectName(QString::fromUtf8("leg_item"));
        leg_item->setCursor(QCursor(Qt::PointingHandCursor));
        leg_item->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        leg_item->setAlignment(Qt::AlignCenter);

        equipment->addWidget(leg_item);

        hand = new QLabel(equipment_layout);
        hand->setObjectName(QString::fromUtf8("hand"));
        hand->setCursor(QCursor(Qt::PointingHandCursor));
        hand->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        hand->setAlignment(Qt::AlignCenter);

        equipment->addWidget(hand);

        offhand = new QLabel(equipment_layout);
        offhand->setObjectName(QString::fromUtf8("offhand"));
        offhand->setCursor(QCursor(Qt::PointingHandCursor));
        offhand->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        offhand->setAlignment(Qt::AlignCenter);

        equipment->addWidget(offhand);


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
        backpack_action_bar->setMaximumSize(QSize(16777215, 48));
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
        close_backpack->setMinimumSize(QSize(36, 36));
        close_backpack->setMaximumSize(QSize(32, 32));
        close_backpack->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"min-width:32px;min-height:32px;\n"
"background:rgb(0, 0, 0);\n"
"color:white;\n"
"border-radius:16px;\n"
"border-width:2px;"));

        _4->addWidget(close_backpack);


        _3->addWidget(backpack_action_bar);

        item_info_panel = new QLabel(item_info);
        item_info_panel->setObjectName(QString::fromUtf8("item_info_panel"));
        item_info_panel->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));
        item_info_panel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        _3->addWidget(item_info_panel);

        item_action_btn = new QFrame(item_info);
        item_action_btn->setObjectName(QString::fromUtf8("item_action_btn"));
        item_action_btn->setMaximumSize(QSize(16777215, 52));
        item_action_btn->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(item_action_btn);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(item_action_btn);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(item_action_btn);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        horizontalLayout_2->addWidget(pushButton_2);


        _3->addWidget(item_action_btn);


        _2->addWidget(item_info);

        shop_gui = new QFrame(centralwidget);
        shop_gui->setObjectName(QString::fromUtf8("shop_gui"));
        shop_gui->setGeometry(QRect(40, 40, 741, 381));
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
        shop_select_bar->setMaximumSize(QSize(16777215, 50));
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

        shop_refresh = new QPushButton(shop_select_bar);
        shop_refresh->setObjectName(QString::fromUtf8("shop_refresh"));
        shop_refresh->setMaximumSize(QSize(100, 16777215));
        shop_refresh->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        horizontalLayout_3->addWidget(shop_refresh);


        verticalLayout_3->addWidget(shop_select_bar);

        shop_item_panel = new QFrame(shop_gui);
        shop_item_panel->setObjectName(QString::fromUtf8("shop_item_panel"));
        shop_item_panel->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        verticalLayout_4 = new QVBoxLayout(shop_item_panel);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        shop_item_info = new QLabel(shop_item_panel);
        shop_item_info->setObjectName(QString::fromUtf8("shop_item_info"));
        shop_item_info->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        verticalLayout_4->addWidget(shop_item_info);


        verticalLayout_3->addWidget(shop_item_panel);

        shop_action = new QFrame(shop_gui);
        shop_action->setObjectName(QString::fromUtf8("shop_action"));
        shop_action->setMaximumSize(QSize(16777215, 50));
        shop_action->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border:solid black 3px;"));
        horizontalLayout_5 = new QHBoxLayout(shop_action);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        shop_buy_item = new QPushButton(shop_action);
        shop_buy_item->setObjectName(QString::fromUtf8("shop_buy_item"));
        shop_buy_item->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        horizontalLayout_5->addWidget(shop_buy_item);

        shop_close_panel = new QPushButton(shop_action);
        shop_close_panel->setObjectName(QString::fromUtf8("shop_close_panel"));
        shop_close_panel->setStyleSheet(QString::fromUtf8("border:3px solid black;\n"
"border-radius:16px;\n"
"border-width:8px;"));

        horizontalLayout_5->addWidget(shop_close_panel);


        verticalLayout_3->addWidget(shop_action);


        _5->addLayout(verticalLayout_3);

        setting_gui = new QFrame(centralwidget);
        setting_gui->setObjectName(QString::fromUtf8("setting_gui"));
        setting_gui->setGeometry(QRect(280, 500, 250, 300));
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
"}\n"
"QPushButton:hover{\n"
"	background:rgb(222, 222, 222);\n"
"}"));

        verticalLayout_5->addWidget(endgame);


        _6->addWidget(verticalFrame_3);

        UI_Test_Project->setCentralWidget(centralwidget);

        retranslateUi(UI_Test_Project);

        playerButton->setDefault(false);


        QMetaObject::connectSlotsByName(UI_Test_Project);
    } // setupUi

    void retranslateUi(QMainWindow *UI_Test_Project)
    {
        UI_Test_Project->setWindowTitle(QCoreApplication::translate("UI_Test_Project", "UI_Test_Project", nullptr));
        playerButton->setText(QString());
        shopButton->setText(QString());
        back->setText(QString());
        settingButton->setText(QString());
        username->setText(QCoreApplication::translate("UI_Test_Project", "\347\216\251\345\256\266\357\274\232Test", nullptr));
        status->setText(QCoreApplication::translate("UI_Test_Project", "MP:100/100", nullptr));
        player->setText(QCoreApplication::translate("UI_Test_Project", "\347\216\251\345\256\266", nullptr));
        monster->setText(QCoreApplication::translate("UI_Test_Project", "\346\200\252\347\211\251", nullptr));
        startButton->setText(QString());
        stopButton->setText(QString());
        chest_item->setText(QCoreApplication::translate("UI_Test_Project", "\350\203\270\347\224\262\345\215\200\345\241\212", nullptr));
        leg_item->setText(QCoreApplication::translate("UI_Test_Project", "\350\255\267\350\205\277\345\215\200\345\241\212", nullptr));
        hand->setText(QCoreApplication::translate("UI_Test_Project", "\346\211\213\346\214\201\346\255\246\345\231\250", nullptr));
        offhand->setText(QCoreApplication::translate("UI_Test_Project", "\345\211\257\346\211\213\346\255\246\345\231\250", nullptr));
        close_backpack->setText(QCoreApplication::translate("UI_Test_Project", "X", nullptr));
        item_info_panel->setText(QCoreApplication::translate("UI_Test_Project", "\346\255\246\345\231\250\344\273\213\347\264\271\345\217\212\346\255\246\345\231\250\345\274\267\345\214\226\347\255\211\345\212\237\350\203\275", nullptr));
        pushButton->setText(QCoreApplication::translate("UI_Test_Project", "\350\243\235\345\202\231", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UI_Test_Project", "\345\215\207\347\264\232(+1)", nullptr));
        shop_refresh->setText(QCoreApplication::translate("UI_Test_Project", "\345\210\267\346\226\260\345\225\206\345\272\227", nullptr));
        shop_item_info->setText(QCoreApplication::translate("UI_Test_Project", "\346\255\246\345\231\250\344\273\213\347\264\271\345\217\212\346\255\246\345\231\250\345\274\267\345\214\226\347\255\211\345\212\237\350\203\275\345\203\271\351\214\242", nullptr));
        shop_buy_item->setText(QCoreApplication::translate("UI_Test_Project", "\350\263\274\350\262\267", nullptr));
        shop_close_panel->setText(QCoreApplication::translate("UI_Test_Project", "\351\227\234\351\226\211", nullptr));
        backtogame->setText(QCoreApplication::translate("UI_Test_Project", "\350\277\224\345\233\236\351\201\212\346\210\262", nullptr));
        gamesaves->setText(QCoreApplication::translate("UI_Test_Project", "\351\201\212\346\210\262\347\264\200\351\214\204", nullptr));
        volumesetting->setText(QCoreApplication::translate("UI_Test_Project", "\350\201\262\351\237\263\350\250\255\345\256\232", nullptr));
        endgame->setText(QCoreApplication::translate("UI_Test_Project", "\347\265\220\346\235\237\351\201\212\346\210\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UI_Test_Project: public Ui_UI_Test_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TEST_PROJECT_H
