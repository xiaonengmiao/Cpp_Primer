// change the value of a pointer and change the value to which the pointer points

#include <iostream>

int main()
{
    int *pi = 0;
    int i = 42;
    std::cout << pi << std::endl;
    // change the value of a pointer
    pi = &i;
    std::cout << pi << std::endl;
    std::cout << i << std::endl;
    // change the value to which a pointer points
    *pi = 0;
    std::cout << pi << std::endl;
    std::cout << i << std::endl;

    return 0;
}
