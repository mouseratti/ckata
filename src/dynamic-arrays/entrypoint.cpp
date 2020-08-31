//
// Created by mkoshel on 8/31/20.
//
# include <iostream>

int main() {
    int arraysCount, queriesCount;
    std::cin >> arraysCount >> queriesCount;
    auto arrayOfArrays = new int *[arraysCount];
    for (auto arrayNumber = 0; arrayNumber < arraysCount; arrayNumber++) {
        int arraySize;
        std::cin >> arraySize;
        int *array = new int[arraySize];
        arrayOfArrays[arrayNumber] = array;
        for (auto arrayElementIndex = 0; arrayElementIndex < arraySize; arrayElementIndex++) {
            std::cin >> array[arrayElementIndex];
        }
    }
    for (auto queryNumber = 0; queryNumber < queriesCount; queryNumber++) {
        int queryArrayNumber, queryArrayElementIndex;
        std::cin >> queryArrayNumber >> queryArrayElementIndex;
        std::cout << arrayOfArrays[queryArrayNumber][queryArrayElementIndex] << std::endl;
    }
    for (auto arrayNumber = 0; arrayNumber < arraysCount; arrayNumber++) {
        delete[] arrayOfArrays[arrayNumber];
    }
    delete[] arrayOfArrays;
}