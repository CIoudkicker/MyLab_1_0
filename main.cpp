#include "UI_mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UI_mainwindow w;
    w.show();
    return a.exec();
}
