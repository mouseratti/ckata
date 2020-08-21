#include <iostream>
# include "practice.h"
int main() {
    std::printf("%s, %s\n", "Hello", "world");
    int *input = new int ;
    int x = 0;
    std::printf("Input some number!\n");
    std::cin  >> *input;
    do_practice(*input);
    return 0;

}
