#ifndef CHOCKOLATEENTERPRISE_H
#define CHOCKOLATEENTERPRISE_H

#include "Enterprise.h"

class ChockolateEnterprise : public Enterprise{

    public:

        ChockolateEnterprise();
        ChockolateEnterprise(QString Name, QList<QString> Owners, double Income, double Area, int EmployeeCount);

        TypesOfEnterprise getTypeEnterprise(); // возвращает тип предприятия
        double TaxCount();  // подсчет налога предприятия
};

#endif // CHOCKOLATEENTERPRISE_H
