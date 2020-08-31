#include <iostream>
# include "functions/1/functions.h"
#include <vector>

using namespace std;

//int main() {
//
//    printf("\nInput four numbers\n");
//
//    vector<int *> inputted;
//    for (int i = 1; i < 5; i++) {
//        printf("input %i number:\n", i);
//        auto container = new int;
//        scanf("%i", container);
//        inputted.push_back(container);
//    }
//    printf("Biggest number is %i", find_greatest(inputted));
//    return 0;
//
//}

void update(int *a,int *b) {
    int* new_a = new int;
    int* new_b = new int;
    *new_a = *a + *b;
    *new_b = *a - *b;
    if (*new_b < 0) {
        *new_b = 0 - *new_b;
    }
    a  = new_a;
    b =  new_b;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    printf("%p %p\n", pa, pb);

    update(pa, pb);
    printf("%p %p", pa, pb);

    return 0;
}