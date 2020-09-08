//
// Created by mkoshel on 08.09.2020.
//
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "Solution.h"
#include "doctest.h"

TEST_CASE ("test solution") {
    Solution solution;

    SUBCASE ("test with [0]") {
        auto input = vector<int>{0};
        solution.moveZeroes(input);
        CHECK(input == vector<int>{0});
    }
    SUBCASE ("{1, 0, 2, 0, 0 ,3, 0}") {
        auto input = vector<int>{1, 0, 2, 0, 0, 3, 0};
        solution.moveZeroes(input);
        CHECK(input == vector<int>{1, 2, 3, 0, 0, 0, 0});
    }
}