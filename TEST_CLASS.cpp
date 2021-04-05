#include "TEST_CLASS.h"
#include "AutoEnterprise.h"
#include "Enterprise.h"


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


