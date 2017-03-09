#include "exercise7.12.hpp"

using namespace std;

int main()
{
    Sales_data total(std::cin);
    if (!total.isbn().empty())
    {
        std::istream &is = std::cin;
        while (is)
        {
            Sales_data trans(is);
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
