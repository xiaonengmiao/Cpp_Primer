#include <iostream>
#include <string>

struct Sales_data
{
    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) {};
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {};
    Sales_data(std::istream &is) {read(is, *this)};

    // 
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

// member functions
istream 
