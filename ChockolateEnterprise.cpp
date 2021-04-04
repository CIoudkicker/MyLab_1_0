#include "ChockolateEnterprise.h"
#include "Enterprise.h"

ChockolateEnterprise::ChockolateEnterprise(QString Name,
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
    tax1 = 0.333 * getEmployeeCount() * getIncome() * getArea();
    this->setTax(tax1);

}


ChockolateEnterprise::ChockolateEnterprise(){

}

Enterprise::TypesOfEnterprise ChockolateEnterprise::getTypeEnterprise(){
    return TypesOfEnterprise::ChockolateEnterprise;
}


double ChockolateEnterprise::TaxCount(){
    double tax1 = 0.333 * getEmployeeCount() * getIncome() * getArea();
    ChockolateEnterprise::setTax(tax1);
    return tax1;
}
