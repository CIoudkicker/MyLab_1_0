#include "UI_mainwindow.h"
#include "EnterpriseRegister.h"
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

    // создание списков владельцев
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

    // создание объектов классов предприятия и дальнейшее создание объектов класса теста
    AutoEnterprise *AutoEnterprise_Example = new AutoEnterprise("SpaceX", *Owners1, 16990, 55, 73);
    TEST_CLASS *AutoEnterprise_Test = new TEST_CLASS();
    AutoEnterprise_Test->TEST_METHOD(AutoEnterprise_Example);


    Enterprise *ChockolateEnterprise_Example = new ChockolateEnterprise("WillyWonka", *Owners2, 35000, 89, 52);
    TEST_CLASS *ChockolateEnterprise_Test = new TEST_CLASS();
    ChockolateEnterprise_Test->TEST_METHOD(ChockolateEnterprise_Example);


    WeaponEnterprice *WeaponEnterprice_Example = new WeaponEnterprice("Avengers", *Owners3, 20000, 22, 34);
    TEST_CLASS *WeaponEnterprice_Test = new TEST_CLASS();
    WeaponEnterprice_Test->TEST_METHOD(WeaponEnterprice_Example);
    qDebug().noquote() << "";

    // создание регистра
    EnterpriseRegister &Register = EnterpriseRegister::Instance();

    // занес в регистр
    Register.addEnterprise(ChockolateEnterprise_Example);
    Register.addEnterprise(AutoEnterprise_Example);

    qDebug().noquote() << "giveCountOfEnterprise is working: " <<
    Register.giveCountOfEnterprise();

    // создал тест чтобы проверить функции регистра
    TEST_CLASS *Test_Register = new TEST_CLASS();

    //тест возврата предприятия
    Test_Register->TEST_METHOD(Register.giveEnterprise(0));
    Test_Register->TEST_METHOD(Register.giveEnterprise(1));

    //тест удаления предприятия из регистра
    Register.deleteEnterprise(1);

    Register.printEnterpriseList();
    qDebug().noquote() << "giveCountOfEnterprise is working: " <<Register.giveCountOfEnterprise()<<"\n";

    // снова добавляю удаленное производство

    AutoEnterprise *AutoEnterprise_Example1 = new AutoEnterprise("SpaceX", *Owners1, 16990, 55, 73);
    Register.addEnterprise(AutoEnterprise_Example1);

    Register.printEnterpriseList();

    // вывожу в консоль предприятия которые имеют общего владельца
    Test_Register->TEST_SAME_OWNER(&Register, "Ilon Musk");

    // создаю новые предприятия AutoEnterprise просто чтобы добавить их в реестр и проверить работу TEST_AVERAGE
    AutoEnterprise *AutoEnterprise_Example2 = new AutoEnterprise("Tesla", *Owners2, 11550, 12, 23);
    AutoEnterprise *AutoEnterprise_Example3 = new AutoEnterprise("Tesla", *Owners3, 23123, 98, 67);

    Register.addEnterprise(AutoEnterprise_Example2);
    Register.addEnterprise(AutoEnterprise_Example3);
    Register.printEnterpriseList();


    Test_Register->TEST_AVERAGE(&Register); // ну собственно TEST_AVERAGE


    delete AutoEnterprise_Example1;
    delete AutoEnterprise_Example2;
    delete AutoEnterprise_Example3;
    delete ChockolateEnterprise_Example;
    delete WeaponEnterprice_Example;

    delete AutoEnterprise_Test;
    delete ChockolateEnterprise_Test;
    delete WeaponEnterprice_Test;

    delete Test_Register;

    delete Owners1;
    delete Owners2;
    delete Owners3;
/*
    QApplication a(argc, argv);
    UI_mainwindow w;
    w.show();
    return a.exec();

*/
    return 0;
}
