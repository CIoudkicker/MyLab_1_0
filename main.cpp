#include "UI_mainwindow.h"
#include "Enterprise.h"
#include "AutoEnterprise.h"
#include "ChockolateEnterprise.h"
#include "WeaponEnterprice.h"
#include "TEST_CLASS.h"

#include <QApplication>
#include <iostream>
#include <QDebug>
#include <QString>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Prog start \n" << endl;



    QList<QString> *Owners1 = new QList<QString>;
    Owners1->append("Arnold Shvarts");
    Owners1->append("Leonardo Dicaprio");
    Owners1->append("Ilon Musk");

    QList<QString> *Owners2 = new QList<QString>;
    Owners2->append("Ilon Musk");
    Owners2->append("Donald Trump");
    Owners2->append("Leon Kennedy");

    QList<QString> *Owners3 = new QList<QString>;
    Owners3->append("Isaak Clark");
    Owners3->append("Commander Shepard");
    Owners3->append("Booker DeWitt ");

    AutoEnterprise *AutoEnterprise_Example = new AutoEnterprise("SpaceX", *Owners1, 16990, 55, 73);

    TEST_CLASS *AutoEnterprise_Test = new TEST_CLASS(AutoEnterprise_Example);
    AutoEnterprise_Test->TEST_METHOD();


    ChockolateEnterprise *ChockolateEnterprise_Example = new ChockolateEnterprise("WillyWonka", *Owners3, 35000, 89, 52);

    TEST_CLASS *ChockolateEnterprise_Test = new TEST_CLASS(ChockolateEnterprise_Example);
    ChockolateEnterprise_Test->TEST_METHOD();


    WeaponEnterprice *WeaponEnterprice_Example = new WeaponEnterprice("Avengers", *Owners2, 20000, 22, 34);

    TEST_CLASS *WeaponEnterprice_Test = new TEST_CLASS(WeaponEnterprice_Example);
    WeaponEnterprice_Test->TEST_METHOD();



    delete AutoEnterprise_Example;
    delete ChockolateEnterprise_Example;
    delete WeaponEnterprice_Example;

    delete AutoEnterprise_Test;
    delete ChockolateEnterprise_Test;
    delete WeaponEnterprice_Test;

    delete Owners1;
    delete Owners2;
    delete Owners3;
    //regist->deleteEnterprise(10);

    QApplication a(argc, argv);
    UI_mainwindow w;
    w.show();
    return a.exec();
}
