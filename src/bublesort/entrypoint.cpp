//
// Created by mkoshel on 8/22/20.
//
# include "sorter.h"
# include <iostream>

int main() {
    int vectorToSort[4] = {4,2,8,1};
    int vectorExpected[4] = {1, 2, 4, 8};
    sortIntegers(vectorToSort);
    for (int index = 0; index < 4; index++) {
        if (vectorToSort[index] != vectorExpected[index]) {
            std::printf(
                    "%d does not equal to %d at position %d",
                    vectorToSort[index],
                    vectorExpected[index],
                    index);
            break;
        }
    }
    delete[] vectorToSort;
    return 0;
}
