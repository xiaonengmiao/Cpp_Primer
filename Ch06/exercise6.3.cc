#include <iostream>

int fact(int i)
{
    return i > 1 ? i*fact(i-1) : 1;
}

int main()
{
    std::cout << "enter an integer:";
    int i = 0;
    std::cin >> i;
    std::cout << fact(i) << std::endl;
}
