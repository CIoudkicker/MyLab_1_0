#include "AutoEnterprise.h"
#include "Enterprise.h"


AutoEnterprise::AutoEnterprise(QString Name,
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
    tax1 =  2 * (getEmployeeCount() * getIncome()) / 3 + 0.5*getArea();;
    this->setTax(tax1);
}


AutoEnterprise::AutoEnterprise(){

}


Enterprise::TypesOfEnterprise AutoEnterprise::getTypeEnterprise(){
    return TypesOfEnterprise::AutoEnterprise;
}


double AutoEnterprise::TaxCount(){
    double tax1 = 2 * (getEmployeeCount() * getIncome()) / 3 + 0.5*getArea();
    AutoEnterprise::setTax(tax1);
    return tax1;
}

