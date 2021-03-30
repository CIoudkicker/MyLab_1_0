#include "UI_mainwindow.h"
#include "ui_UI_mainwindow.h"

UI_mainwindow::UI_mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI_mainwindow)
{
    ui->setupUi(this);
}

UI_mainwindow::~UI_mainwindow()
{
    delete ui;
}

