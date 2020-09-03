//
// Created by mkoshel on 9/3/20.#
//

# include "Solution.h"
# include "map"

int Solution::singleNumber(std::vector<int> &nums) {
    auto myMap = new std::map<int, bool>;
    for (auto value: nums) {
        if (myMap->count(value) == 1) {
          myMap->at(value) = true;
            continue;
        }
        myMap->insert(std::pair(value, false));
    }
    for (auto myMapIterator = myMap->begin(); myMapIterator !=myMap->end(); myMapIterator++) {
        if (!myMapIterator->second) {
            return myMapIterator->first;
        }
    }
    return 0;
}