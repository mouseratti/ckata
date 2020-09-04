#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};




vector<int> Solution::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    for (auto i = 0; i < nums.size() -1; i++) {
        for (auto j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) return vector<int>{i, j};
        }
    }
    return vector<int>{};
}


int main() {
 auto input = vector<int>{-3,2,4, 3};
 Solution s;
 auto result = s.twoSum(input, 0);
 std::cin.get();
}