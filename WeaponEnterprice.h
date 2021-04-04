#ifndef WEAPONENTERPRICE_H
#define WEAPONENTERPRICE_H

#include "Enterprise.h"

class WeaponEnterprice : public Enterprise{

    public:

        WeaponEnterprice();
        WeaponEnterprice(QString Name, QList<QString> Owners, double Income, double Area, int EmployeeCount);

        TypesOfEnterprise getTypeEnterprise();
        double TaxCount();
};


#endif // WEAPONENTERPRICE_H
