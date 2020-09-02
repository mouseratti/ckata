//
// Created by mkoshel on 9/2/20.
//

#ifndef CKATA_MYSUCCESSORCLASS1_H
#define CKATA_MYSUCCESSORCLASS1_H


#include "MyConcreteClass1.h"

class MySuccessorClass1: public MyConcreteClass1 {
public:
    using MyConcreteClass1::MyConcreteClass1;
    std::string getName() override;
};


#endif //CKATA_MYSUCCESSORCLASS1_H
