//
// Created by mkoshel on 09.09.2020.
//
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

# include "doctest.h"
#include "Solution.h"

# include <vector>

using std::vector;


TEST_CASE ("tests for the Solution.twoSum") {
    Solution solution;
    SUBCASE("{0,1,2,3,0,5}") {
        auto input = vector<int>{0, 1, 2, 3, 0, 5};
        CHECK(solution.twoSum(input, 0) == vector<int>{0, 4});
    }

}