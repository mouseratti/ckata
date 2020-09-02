//
// Created by mkoshel on 9/2/20.
//

#include "../inc/MySuccessorClass1.h"

std::string MySuccessorClass1::getName()  {
    auto _name = MyConcreteClass1::getName();
    return "MySuccessorClass1" + _name;
}
