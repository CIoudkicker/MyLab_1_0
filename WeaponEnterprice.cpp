#include "WeaponEnterprice.h"
#include "Enterprise.h"
#include <cmath>

WeaponEnterprice::WeaponEnterprice(QString Name,
                                 QList<QString> Owners,
                                 double Income,
                                 double Area,
                                 int EmployeeCount)
{
    double tax1;
    this->setName(Name);
    this->setOwnerList(Owners);
    this->setIncome(Income);
    this->setArea(Area);
    this->setEmployeeCount(EmployeeCount);
    tax1 = sin(getEmployeeCount() * getIncome()) * getArea();
    this->setTax(tax1);
}


WeaponEnterprice::WeaponEnterprice(){

}

Enterprise::TypesOfEnterprise WeaponEnterprice::getTypeEnterprise(){
    return TypesOfEnterprise::WeaponEnterprice;
}


double WeaponEnterprice::TaxCount(){
    double tax1 = sin(getEmployeeCount() * getIncome()) * getArea();
    WeaponEnterprice::setTax(tax1);
    return tax1;
}
