#ifndef ENTERPRISEREGISTER_H
#define ENTERPRISEREGISTER_H

#include <QString>
#include <QList>
#include <QDebug>
#include <iostream>

using namespace std;

class Enterprise;

class EnterpriseRegister{

    private:
        EnterpriseRegister();
        ~EnterpriseRegister();
        EnterpriseRegister(EnterpriseRegister const&);
        EnterpriseRegister& operator= (EnterpriseRegister const&);

        QList<Enterprise*> enterpriseList;
        QList<int*> trainingList;

    public:
        static EnterpriseRegister& Instance(){
            static EnterpriseRegister s;
            return s;
        }

        void addEnterprise(Enterprise *enterprise);   // добавление предприятия в список +
        Enterprise* giveEnterprise(int n);   // получение предприятия по индексу из списка +
        int giveCountOfEnterprise();   // получение числа предприятий +
        void deleteEnterprise(int n);   // удаление предприятия из списка +
        void printEnterpriseList();  // выводит в консоль лист предприятий
};

#endif // ENTERPRISEREGISTER_H

