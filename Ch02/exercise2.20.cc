#include <iostream>

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = 0;
    std::cout << p1 << std::endl;
    *p1 = *p1 * *p1;
    std::cout << i << std::endl;
    std::cout << p1 << std::endl;
    std::cout << *p1 << std::endl;
    return 0;
}
