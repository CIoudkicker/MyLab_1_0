#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class UI_mainwindow; }
QT_END_NAMESPACE

class UI_mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    UI_mainwindow(QWidget *parent = nullptr);
    ~UI_mainwindow();

private:
    Ui::UI_mainwindow *ui;
};
#endif // UI_MAINWINDOW_H
