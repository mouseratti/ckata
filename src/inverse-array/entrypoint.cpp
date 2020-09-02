//
// Created by mkoshel on 9/1/20.
//
#include <iostream>


int main() {
    int arraySize;
    int intContainer;
    std::cin >> arraySize;
    auto array = new int[arraySize];
    for (auto arrayElementIndex = 0; arrayElementIndex < arraySize; arrayElementIndex++) {
        std::cin >> array[arrayElementIndex];
    }
    for (auto arrayElementIndex = 0; arrayElementIndex < arraySize / 2; arrayElementIndex++) {
        auto currentElement = &array[arrayElementIndex];
        auto reversedElement = &array[arraySize - 1 - arrayElementIndex];
        intContainer = *currentElement;
        *currentElement = *reversedElement;
        *reversedElement = intContainer;
    }
    for (auto arrayElementIndex = 0; arrayElementIndex < arraySize ; arrayElementIndex++) {
        std::cout << array[arrayElementIndex] << " ";
    }
    std::cout << std::endl;
    delete [] array;
}


