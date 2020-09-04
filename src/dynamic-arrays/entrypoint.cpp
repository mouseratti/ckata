//
// Created by mkoshel on 8/31/20.
//
//int main() {
//    int arraysCount, queriesCount;
//    std::cin >> arraysCount >> queriesCount;
//    auto arrayOfArrays = new int *[arraysCount];
//    for (auto arrayNumber = 0; arrayNumber < arraysCount; arrayNumber++) {
//        int arraySize;
//        std::cin >> arraySize;
//        int *array = new int[arraySize];
//        arrayOfArrays[arrayNumber] = array;
//        for (auto arrayElementIndex = 0; arrayElementIndex < arraySize; arrayElementIndex++) {
//            std::cin >> array[arrayElementIndex];
//        }
//    }
//    for (auto queryNumber = 0; queryNumber < queriesCount; queryNumber++) {
//        int queryArrayNumber, queryArrayElementIndex;
//        std::cin >> queryArrayNumber >> queryArrayElementIndex;
//        std::cout << arrayOfArrays[queryArrayNumber][queryArrayElementIndex] << std::endl;
//    }
//    for (auto arrayNumber = 0; arrayNumber < arraysCount; arrayNumber++) {
//        delete[] arrayOfArrays[arrayNumber];
//    }
//    delete[] arrayOfArrays;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // считайте три строчки целиком и выведите их в обратном порядке
    auto myVector = new vector<string>;
    auto buffer = new char[256];
    for (auto i = 0; i < 3; i++) {

        cin.getline(buffer, 256);
        myVector->push_back(buffer);
    }
    cout << endl;
    for (auto myVectorIterator = myVector->end(); myVectorIterator >= myVector->begin(); myVectorIterator--) {
        cout << *myVectorIterator << endl;
    }
    delete myVector;

}