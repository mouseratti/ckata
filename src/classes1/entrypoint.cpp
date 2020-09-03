//
// Created by mkoshel on 9/2/20.
//
#include <iostream>
# include "inc/MyAbstractClass.h"
# include "inc/MyConcreteClass1.h"
# include "inc/MySuccessorClass1.h"


int main() {
    MyAbstractClass* object1 = new MyConcreteClass1("property1", 1);
    MyAbstractClass* object2 = new MySuccessorClass1("property2", 4);
    std::cout << "concrete class:" << object1->getName() << object1->getValue() << std::endl;
    std::cout << "successor class:" << object2->getName() << object2->getValue();
    delete object1;
    delete object2;

}