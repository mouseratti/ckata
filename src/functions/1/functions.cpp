//
// Created by mkoshel on 8/21/20.
//
# include <vector>
#include "functions.h"
int find_greatest(std::vector<int*> inputted) {
    int* result = inputted[0];
    for (int *pInt : inputted) {
        if (*pInt > *result) {
            result = pInt;
        }
    }
    return *result;
}
