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

