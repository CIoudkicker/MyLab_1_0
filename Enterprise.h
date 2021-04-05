#ifndef ENTERPRISE_H
#define ENTERPRISE_H

#include <QString>
#include <QList>

class Enterprise{

    public:
        Enterprise();
        virtual ~Enterprise();

        enum TypesOfEnterprise{
            ChockolateEnterprise,
            WeaponEnterprice,
            AutoEnterprise
        };

        void setName(QString name); // +   // сеттеры для приватных полей абстрактного класса предприятия
        void setOwnerList(QList<QString> list); // +
        void setIncome(double income1);  // +
        void setArea(double area1); // +
        void setEmployeeCount(int count); // +
        void setTax(double tax1);

        QString getName();  // +    // получаю значения приватных полей абстрактного класса предприятия
        QList<QString> getOwnerList(); // +
        double getIncome(); // +
        double getArea(); // +
        int getEmployeeCount(); // +
        double getTax(); // +

        void deleteName(); // +   // удаление для приватных полей абстрактного класса предприятия
        void deleteOwnerList(); // +
        void deleteIncome();  // +
        void deleteArea(); // +
        void deleteEmployeeCount(); // +

        QString printTypeEnterpise(TypesOfEnterprise itemType);   // выводит на экран название типа предприятия

        virtual TypesOfEnterprise getTypeEnterprise() = 0;  // возвращает тип предприятия
        virtual double TaxCount() = 0;  // подсчет налога предприятия

    private:
        QString enterpriseName;     // имя предприятия
        QList<QString> ownerList;   // список владельцев предприятия
        double income;  // доход предприятия
        double area;  // площадь предприятия
        int employeeCount;  // количество работников на предприятии
        double tax; // налог
};

#endif // ENTERPRISE_H

