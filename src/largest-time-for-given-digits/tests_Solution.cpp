//
// Created by mkoshel on 10.09.2020.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

# include "doctest.h"
#include "Solution.h"



TEST_CASE ("largest time") {
    Solution solution;

    auto v1 = vector<int>{2,4,5,1};
    auto v2 {vector<int>{5,5,5,5}};
    auto v3 {vector<int>{1,2,3,4,5}};
    auto v4 {vector<int>{0,4,0,0}};
    auto v5 {vector<int>{9,1,1,5}};
    auto v6  = vector<int>{0,4,4,3};
    auto v7  = vector<int>{2,0,6,6};
//    CHECK(solution.largestTimeFromDigits(v4) == "04:00");
//    CHECK(solution.largestTimeFromDigits(v1) == "21:54");
//    CHECK(solution.largestTimeFromDigits(v2) == "");
//    CHECK(solution.largestTimeFromDigits(v3) == "");
//    CHECK(solution.largestTimeFromDigits(v5) == "19:51");
//    CHECK(solution.largestTimeFromDigits(v6) == "04:43");
    CHECK(solution.largestTimeFromDigits(v7) == "06:26");


}