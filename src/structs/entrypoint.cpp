//
// Created by mkoshel on 8/31/20.
//

#include <iostream>

struct MyStruct {
    int *a;
    int *b;

    MyStruct(int a, int b) {

        this->a = new int(a);
        this->b  = new int(b);

    }

    MyStruct* operator += (MyStruct* anotherMember) {
        *this->a += *anotherMember->a;
        *this->b += *anotherMember->b;
        return this;
    }
};

int main() {
    auto *myStruct1 = new MyStruct(5, 10);
    auto *myStruct2 = new MyStruct(1, 2);
    MyStruct& refer = *myStruct1;
    std::cout << &refer << "  " << myStruct1 << std::endl;
    *myStruct1 += myStruct2;
    std::cout << *myStruct1->a << "|" <<  *myStruct1->b << std::endl;
    std::cout << &refer << "  " << myStruct1 << std::endl;
    refer = *myStruct2;
    std::cout << &refer << "  " << myStruct1 << std::endl;
}