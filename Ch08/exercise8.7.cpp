#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../Ch07/exercise7.26.hpp"

using namespace std;

int main(int argc, char **argv)
{
    ifstream ifs(argv[1]);
    ofstream ofs(argv[2]);

    Sales_data total;
    if (read(ifs, total))
    {
        Sales_data trans;
        while (read(ifs, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(ofs, total) << std::endl;
                total = trans;
            }
        }
        print(ofs, total) << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
    }

    return 0;
}
