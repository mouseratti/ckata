//
// Created by mkoshel on 9/3/20.#
//

# include "Solution.h"
// variant 0
/**# include "map"
int Solution::singleNumber(std::vector<int> &nums) {

    auto myMap = new std::map<int, bool>;
    for (auto numsIterator = nums.begin(); numsIterator < nums.end(); numsIterator++) {
        if (myMap->count(*numsIterator) == 1) {
          myMap->erase(*numsIterator);
            continue;
        }
        myMap->insert(std::pair(*numsIterator, false));
    }
    for (auto myMapIterator = myMap->begin(); myMapIterator !=myMap->end(); myMapIterator++) {
            return myMapIterator->first;
    }
    return 0;
}
**/
// variant 1
//int Solution::singleNumber(std::vector<int> &nums) {
//    struct MyStackElement {
//        MyStackElement();
//
//        MyStackElement(int& value) {
//            this->value = value;
//            next = nullptr;
//        }
//        ~MyStackElement() {
//            next = nullptr;
//        }
//
//        bool isEmpty() {
//            return next == nullptr;
//        }
//
//        void setNext(MyStackElement *&element) {
//            next = element;
//        }
//
//        void push(MyStackElement *&element) {
//            element->setNext(next);
//            setNext(element);
//        }
//
//        MyStackElement *pop() {
//            if (next == nullptr) {
//                return nullptr;
//            }
//            auto returned = next;
//            setNext(next->next);
//            return returned;
//        }
//        MyStackElement *getNext() {
//            return next;
//        }
//
//
//        bool operator==(int value) const {
//            return this->value == value;
//        }
//
//    private:
//        int value;
//        MyStackElement *next;
//
//    };
//    MyStackElement *stack1;
//    MyStackElement *stack2;
//    for (auto vectorElement: nums) {
//        if (stack1 == nullptr) {
//            stack1 =  new MyStackElement(vectorElement);
//            continue;
//        }
//        if (*stack1 == vectorElement) {
//            stack2 = stack1->getNext();
//            delete stack1;
//            stack1 = stack2;
//        }
//
//    }
//}

// variant 2
int Solution::singleNumber(std::vector<int> &nums) {
    int x = 0;
    for (auto element = nums.begin(); element < nums.end(); element++) {
        x ^= *element;
    }
    return x;
}