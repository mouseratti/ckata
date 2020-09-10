#include <vector>

using std::vector;
class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target);
};
vector<int> Solution::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    for (auto i = 0; i < nums.size() - 1; i++) {
        for (auto j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) return vector<int>{i, j};
        }
    }
    return vector<int>{};
}
