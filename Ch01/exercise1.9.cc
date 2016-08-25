// sum the numbers from 50 to 100 using while

#include <iostream>

int main()
{
    int val = 50, sum = 0;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << sum << std::endl;
    
    return 0;
}
