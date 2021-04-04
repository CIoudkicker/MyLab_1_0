#ifndef AUTOENTERPRISE_H
#define AUTOENTERPRISE_H

#include "Enterprise.h"

class AutoEnterprise : public Enterprise{

    public:

        AutoEnterprise();
        AutoEnterprise(QString Name, QList<QString> Owners, double Income, double Area, int EmployeeCount);

        TypesOfEnterprise getTypeEnterprise();
        double TaxCount();
};

#endif // AUTOENTERPRISE_H
