#include "ui_test_project.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UI_Test_Project w;
    w.show();
    w.setFixedSize(808,487);
    return a.exec();
}
