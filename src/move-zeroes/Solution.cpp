//
// Created by mkoshel on 07.09.2020.
//

#include "include/Solution.h"


void Solution::moveZeroes(vector<int>& nums) {
    int shiftSize {0};
    for (auto i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            shiftSize += 1;
            continue;
        }
        if (shiftSize > 0) {
            nums[i - shiftSize] = nums[i];
        }
    }
    for (int i = nums.size()-1; (i >= nums.size()-shiftSize && i > 0); i--) {
        nums[i] = 0;
    }
}