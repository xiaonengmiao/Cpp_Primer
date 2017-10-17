#include <iostream>


void swap(int &i, int &j)
{
    int k = i;
    i = j;
    j = k;
}

int main()
{
    for (int i, j; std::cout << "enter two ints:\n", std::cin >> i >> j; )
    {
        swap(i,j);
        std::cout << i << " " << j << std::endl;
    }
    return 0;
}
