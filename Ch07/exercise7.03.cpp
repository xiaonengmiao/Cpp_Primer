#include <iostream>
#include <string>
#include "exercise7.02.h"

using namespace std;

int main()
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (trans.bookNo == total.bookNo)
            {
                total.combine(trans);
            }
            else
            {
                std::cout << total.isbn() << std::endl;
                total = trans;
            }
        }
        std::cout << total.isbn() << std::endl;
    }
    else
    {
        std::cerr << "No data input! Please check." << std::endl;
        return -1;
    }
    return 0;
}
