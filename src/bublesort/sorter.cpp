//
// Created by mkoshel on 8/22/20.
//

#include "sorter.h"

void sortIntegers(int input_array[]) {
    int container;
    for (int outerIndex = 0; outerIndex < input_array; outerIndex++) {
        if (input_array[outerIndex] > input_array[outerIndex + 1]) {
            container = *input_array[outerIndex];
            input_array[outerIndex] = input_array[outerIndex + 1];
            *input_array[outerIndex + 1] = container;
        }
    }

}
