#include <iostream>
int main()
{
    int *pi = 0;
    int i = 42;
    std::cout << pi << std::endl;
    pi = &i;
    std::cout << pi << std::endl;
    std::cout << i << std::endl;
    *pi = 0;
    std::cout << pi << std::endl;
    std::cout << i << std::endl;

    return 0;
}
