#include "EnterpriseRegister.h"
#include "Enterprise.h"
#include <iostream>


#include <QList>

using namespace std;


EnterpriseRegister::EnterpriseRegister(){}

EnterpriseRegister::~EnterpriseRegister(){
    while(!enterpriseList.isEmpty()){
        delete enterpriseList.takeLast();
    }
}


void EnterpriseRegister::addEnterprise(Enterprise *enterprise){ // добавление предприятия +

    qDebug().noquote()<< "addEnterprise is working. Adding: "<< enterprise->printTypeEnterpise(enterprise->getTypeEnterprise());
    this->enterpriseList.append(enterprise); 
}

Enterprise* EnterpriseRegister::giveEnterprise(int n){ // получение предприятия по индексу +
//    qDebug().noquote().nospace() << "\ngiveEnterprise is working:"<<" ["<<n<<"] " << this->enterpriseList[n]->printTypeEnterpise(this->enterpriseList[n]->getTypeEnterprise());
    if(!this->enterpriseList.isEmpty()){
//        qDebug().noquote();
        return this->enterpriseList[n];
    }
    else{
        qDebug().noquote() << "Enterprise list is empty";
        return NULL;
    }
}

int EnterpriseRegister::giveCountOfEnterprise(){  // получение числа предприятий +
//    qDebug().noquote() << "giveCountOfEnterprise is working: " << this->enterpriseList.length();
    if(!this->enterpriseList.isEmpty()){
        return this->enterpriseList.length();
    }
    else{
        return 0;
    }
}

void EnterpriseRegister::deleteEnterprise(int n){   // удаление предприятия +
    qDebug().noquote() << "\ndeleteEnterprise is working: deleting #"<<n<<" enterprise";
    if(enterpriseList[n] != nullptr){
        delete enterpriseList[n];
        enterpriseList.removeAt(n);
    }
}

void EnterpriseRegister::printEnterpriseList(){
    qDebug().noquote()<< "printEnterpriseList is working:";
    for(int i = 0; i < this->enterpriseList.length(); i++){
        qDebug().noquote().nospace()<<" ["<<i<<"] "<< this->enterpriseList[i]->printTypeEnterpise(this->enterpriseList[i]->getTypeEnterprise());
    }
}

