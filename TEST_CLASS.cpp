#include "TEST_CLASS.h"
#include "AutoEnterprise.h"
#include "Enterprise.h"

TEST_CLASS::TEST_CLASS()
{
    this->enterprise = nullptr;
}


TEST_CLASS::TEST_CLASS(Enterprise *enterprise)
{
    this->enterprise = enterprise;
}

TEST_CLASS::~TEST_CLASS(){
    delete enterprise;
}

void TEST_CLASS::TEST_METHOD(){

    qDebug().noquote() << "\nTEST IS START WITH ENTERPRISE:" << this->enterprise->printTypeEnterpise(this->enterprise->getTypeEnterprise());

    qDebug().noquote() <<"Enterprise Name:"<< this->enterprise->getName();
    qDebug().noquote() <<"Enterprise Owners:"<< this->enterprise->getOwnerList();
    qDebug().noquote() <<"Enterprise Income:"<< this->enterprise->getIncome();
    qDebug().noquote() <<"Enterprise Area:"<< this->enterprise->getArea();
    qDebug().noquote() <<"Enterprise Employee Count:"<< this->enterprise->getEmployeeCount();
    qDebug().noquote() << "Tax is " << this->enterprise->getTax();
}

void TEST_CLASS::TEST_METHOD(Enterprise *enterprise){

    qDebug().noquote() << "\nTEST IS START WITH ENTERPRISE:" << enterprise->printTypeEnterpise(enterprise->getTypeEnterprise());

    qDebug().noquote() <<"Enterprise Name:"<< enterprise->getName();
    qDebug().noquote() <<"Enterprise Owners:"<< enterprise->getOwnerList();
    qDebug().noquote() <<"Enterprise Income:"<< enterprise->getIncome();
    qDebug().noquote() <<"Enterprise Area:"<< enterprise->getArea();
    qDebug().noquote() <<"Enterprise Employee Count:"<< enterprise->getEmployeeCount();
    qDebug().noquote() << "Tax is " << enterprise->getTax();
}

void TEST_CLASS::TEST_SAME_OWNER(EnterpriseRegister *registr, QString ownerName){
    qDebug().noquote().nospace()<< "\nTEST_SAME_OWNER for: "<<ownerName;
    for(int i = 0; i < registr->giveCountOfEnterprise(); i++){
        for(int j = 0; j < registr->giveEnterprise(i)->getOwnerList().length(); j++){
            if(registr->giveEnterprise(i)->getOwnerList()[j] == ownerName){
                qDebug().noquote().nospace()<<" ["<<i<<"] "<<
                registr->giveEnterprise(i)->printTypeEnterpise(registr->giveEnterprise(i)->getTypeEnterprise());
            }
        }
    }
}

void TEST_CLASS::TEST_AVERAGE(EnterpriseRegister *registr){
    qDebug().noquote().nospace()<<"\nTEST_AVERAGE is working:";

    QList<QList<double>> List;
    for(int i = 0; i < 256; i++){   // формирую заготовку массива List 256 на 4
        QList<double> unList;
        for(int j = 0; j < 4; j++){
            unList.append(0);
        }
        List.append(unList);
    }
    // в общем массив List содержит в себе все характеристики предприятия для каждого предприятия
    // то есть соответствующей позиции в List[i] соответствует TypeEnterprise[i], вот и всё, всё просто

    int maxCount = -1; // подсчитает какой максимальный разброс "пойманных" в регистре предприятий из перечисления TypeEnterprise
    for(int i = 0; i < registr->giveCountOfEnterprise(); i++){
        qDebug().noquote().nospace()<< registr->giveEnterprise(i)->getTypeEnterprise();
        int i1 = registr->giveEnterprise(i)->getTypeEnterprise();
        if(maxCount < i1) maxCount = i1;
        List[i1][0] = List[i1][0] + registr->giveEnterprise(i)->getIncome();
        List[i1][1] = List[i1][1] + registr->giveEnterprise(i)->getArea();
        List[i1][2] = List[i1][2] + registr->giveEnterprise(i)->getEmployeeCount();
        List[i1][3] = List[i1][3] + 1;
    }
    maxCount++; // какой максимальный разброс "пойманных" в регистре предприятий из перечисления TypeEnterprise

    for(int i = 0; i < maxCount; i++){ // для удобства восприятия, вывод на экран просто List[i] вместе с соответствующим названием предприятия
        qDebug().noquote()<< registr->giveEnterprise(0)->printTypeEnterpise((Enterprise::TypesOfEnterprise)i)
            <<List[i];
    }
    qDebug().noquote().nospace()<< "\nmaxCount: "<< maxCount;


    for(int i = 0; i < maxCount; i++){ // ну вот и сам вывод средних значений характеристик
        if(List[i][3] > 0){
            qDebug().noquote().nospace()
                << registr->giveEnterprise(0)->printTypeEnterpise((Enterprise::TypesOfEnterprise)i)<<"==>"
                << " Avg Income: "<<List[i][0]/List[i][3]<< ", Avg Area: "<<List[i][1]/List[i][3]<< ", Avg EmployeeCount: "<<List[i][2]/List[i][3];

        }
    }
}
