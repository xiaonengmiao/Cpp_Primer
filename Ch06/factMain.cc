#include <iostream>

#include "Chapter6.h"

int main()
{
    std::cout << "enter an integer:";
    int i = 0;
    std::cin >> i;
    std::cout << fact(i) << std::endl;

    return 0;
}
