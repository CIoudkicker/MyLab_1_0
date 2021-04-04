#ifndef TEST_CLASS_H
#define TEST_CLASS_H

#include <iostream>
#include <QDebug>
#include "AutoEnterprise.h"
#include "Enterprise.h"
using namespace std;

class TEST_CLASS{

    public:

        TEST_CLASS(Enterprise *enterprise);
        ~TEST_CLASS();
        void TEST_METHOD();

    private:

        Enterprise *enterprise;
};

#endif // TEST_CLASS_H
