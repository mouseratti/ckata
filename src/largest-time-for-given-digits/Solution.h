//
// Created by mkoshel on 10.09.2020.
//
//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/554/week-1-september-1st-september-7th/3445/
# include <vector>
# include <string>

#ifndef CKATA_SOLUTION_H
#define CKATA_SOLUTION_H


using std::string, std::vector;

class Solution {
public:
    string largestTimeFromDigits(vector<int> &arr) {

        if (arr.size() > 4) {
            return "";
        }
        auto max_values{vector<int>{2, 9, 5}};
        for (auto & elem : arr) {
            if (elem == 2) {
                max_values[1] = 3;
                break;
            }
        }
        int container;
        std::sort(arr.begin(), arr.end(), std::greater<>());
        for (int i = 0; i < 3; i++) {
            if (arr[i] <= max_values[i]) continue;
            for (auto j = i+1; j < 4; j++) {
                if (arr[j] > max_values[i]) continue;
                for (int swap_index = j; swap_index > i; swap_index--) std::swap(arr[swap_index], arr[swap_index-1]);
                break;
            }
            if (arr[i] > max_values[i]) return "";
        }
        std::stringstream result;
        result << arr[0] << arr[1] << ":" << arr[2] << arr[3];
        return result.str();
    }
};


#endif //CKATA_SOLUTION_H
