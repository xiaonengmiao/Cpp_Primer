// print each number in the range specified by two integer.

#include <iostream>

int main() 
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    int c = a;
    while (c <= b) {
        std::cout << c << std::endl;
        ++c;
    }

    return 0;
}
