//
// Created by mkoshel on 9/2/20.
//
#include <string>

#ifndef CKATA_MYABSTRACTCLASS_H
#define CKATA_MYABSTRACTCLASS_H

class MyAbstractClass {

protected:
    std::string _name;
    int64_t _value;

public:
    virtual std::string getName() = 0;

    virtual int64_t getValue() = 0;
    MyAbstractClass(std::string name, int64_t value);
};




#endif //CKATA_MYABSTRACTCLASS_H
