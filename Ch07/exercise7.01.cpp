#include <iostream>
#include <string>

using namespace std;

struct Sales_data 
{
    string bookNo;
    unsigned units_sold;
    double revenue;
};

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
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue 
                    << std::endl;
                total = trans;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue
            << std::endl;
    }
    else
    {
        std::cerr << "No data input! Please check." << std::endl;
        return -1;
    }
    return 0;
}
