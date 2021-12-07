#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void timerEvent(QTimerEvent *event);
    int timer_key = -1;
    int m_nTimerID;
    int pushbtn_animte = 0;
    template<class T>
    void Animation_start(T &item, int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int delay = 1000);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
