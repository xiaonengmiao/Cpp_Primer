// print each number in the range specified by two integers

#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cout << "Please input two integers:\n";
    std::cin >> a >> b;

    if (a > b)
    {
      int tmp = 0;
      tmp = a;
      a = b;
      b = tmp;
    }

    for (int i = a; i <= b; ++i)
    {
      std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
