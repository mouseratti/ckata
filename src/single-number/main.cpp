//
// Created by mkoshel on 9/3/20.
//
//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/
#include "Solution.h"

int main() {
    auto solution = new Solution();
    auto vector1 = new std::vector<int>{1, 4, 2, 4, 5, 1, 5};
    auto vector2 = new std::vector<int>{2, 3, 4, 1, 2, 3, 4};
    if (solution->singleNumber(*vector1) != 2) {
        return 1;
    }
    if (solution->singleNumber(*vector2) != 1) {
        return 1;
    }
    return 0;
}