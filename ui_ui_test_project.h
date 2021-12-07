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
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QProgressBar *monsterHp;
    QLabel *monster;
    QProgressBar *exp_bar;
    QPushButton *startButton;
    QPushButton *stopButton;

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
        verticalLayoutWidget->setGeometry(QRect(0, 0, 781, 106));
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
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
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
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(310, 420, 61, 31));
        startButton->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon3);
        startButton->setIconSize(QSize(20, 20));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(400, 420, 61, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/stop2.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon4);
        stopButton->setIconSize(QSize(25, 25));
        UI_Test_Project->setCentralWidget(centralwidget);

        retranslateUi(UI_Test_Project);

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
        status->setText(QApplication::translate("UI_Test_Project", "MP:100/100", nullptr));
        player->setText(QApplication::translate("UI_Test_Project", "\347\216\251\345\256\266", nullptr));
        monster->setText(QApplication::translate("UI_Test_Project", "\346\200\252\347\211\251", nullptr));
        startButton->setText(QString());
        stopButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UI_Test_Project: public Ui_UI_Test_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TEST_PROJECT_H
