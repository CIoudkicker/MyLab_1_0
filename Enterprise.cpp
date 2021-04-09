#include <Enterprise.h>

Enterprise::Enterprise(){}

Enterprise::~Enterprise(){}


//-------------setters--------------------------------------------
void Enterprise::setName(QString name){ // установить имя предприятия +
    this->enterpriseName = name;
}

void Enterprise::setOwnerList(QList<QString> list){ // установить список владельцев предприятия +
    this->ownerList = list;
}

void Enterprise::setIncome(double income1){ // установить доход предприятия +
    this->income = income1;
    this->TaxCount();
}

void Enterprise::setArea(double area1){  // установить площадь предприятия +
    this->area = area1;
    this->TaxCount();
}

void Enterprise::setEmployeeCount(int count){ // установить число сотрудников предприятия
    this->employeeCount = count;
    this->TaxCount();
}

void Enterprise::setTax(double tax1){
    this->tax = tax1;
}

//-------------getters--------------------------------------------
QString Enterprise::getName(){  // получить имя предприятия +
    return this->enterpriseName;
}

QList<QString> Enterprise::getOwnerList(){ // получить список владельцев предприятия +
    return this->ownerList;
}

double Enterprise::getIncome(){  // получить доход предприятия +
    return this->income;
}

double Enterprise::getArea(){  // получить площадь предприятия +
    return this->area;
}

int Enterprise::getEmployeeCount(){ // получить число сотрудников предприятия +
    return this->employeeCount;
}

double Enterprise::getTax(){ // получить налог предприятия +
    return this->tax;
}

//-------------delete--------------------------------------------

void Enterprise::deleteName(){ // удалить имя предприятия +
    this->enterpriseName.clear();
}

void Enterprise::deleteOwnerList(){ // удалить список владельцев предприятия +
    this->ownerList.clear();
}

void Enterprise::deleteIncome(){ // удалить доход предприятия +
    this->income = NULL;
}

void Enterprise::deleteArea(){  // удалить площадь предприятия +
    this->area = NULL;
}

void Enterprise::deleteEmployeeCount(){ // удалить число сотрудников предприятия +
    this->employeeCount = NULL;
}

QString Enterprise::printTypeEnterpise(TypesOfEnterprise itemType){

    switch (itemType) {

        case TypesOfEnterprise::AutoEnterprise:{
            return "AutoEnterprise";
        }
        case TypesOfEnterprise::ChockolateEnterprise:{
            return "ChockolateEnterprise";
        }
        case TypesOfEnterprise::WeaponEnterprice:{
            return "WeaponEnterprice";
        }
        default:{
            return "Wrong type!";
        }
    }
}
