#include <iostream>
# include "functions/1/functions.h"
#include <vector>

using namespace std;

int main() {

    printf("\nInput four numbers\n");

    vector<int *> inputted;
    for (int i = 1; i < 5; i++) {
        printf("input %i number:\n", i);
        auto container = new int;
        scanf("%i", container);
        inputted.push_back(container);
    }
    printf("Biggest number is %i", find_greatest(inputted));
    return 0;

}
