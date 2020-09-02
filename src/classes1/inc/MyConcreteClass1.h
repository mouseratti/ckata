//
// Created by mkoshel on 9/2/20.
//

#ifndef CKATA_MYCONCRETECLASS1_H
#define CKATA_MYCONCRETECLASS1_H
#include "MyAbstractClass.h"

class MyConcreteClass1: public MyAbstractClass {
public:
    using MyAbstractClass::MyAbstractClass;
    std::string getName();
    int64_t getValue();
};


#endif //CKATA_MYCONCRETECLASS1_H
