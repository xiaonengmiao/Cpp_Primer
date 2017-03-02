#include <iostream>
#include <string>
#include "exercise7.06.hpp"

using namespace std;

int main()
{
    Sales_data total;
    if (read(std::cin, total))
    {
        Sales_data trans;
        while (read(std::cin, trans))
        {
            if (trans.isbn() == total.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data input! Please check." << std::endl;
        return -1;
    }
    return 0;
}
