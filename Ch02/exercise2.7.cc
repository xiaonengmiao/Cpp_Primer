// there is a error in this code.

#include <iostream>

int main()
{
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    std::cout << 3.14e1L << std::endl;
    // an error occurs 
    std::cout << 1024f << std::endl;
    std::cout << 3.14L << std::endl;

     return 0;
}
