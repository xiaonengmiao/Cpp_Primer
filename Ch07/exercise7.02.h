#ifndef EXERCISE7_02_H
#define EXERCISE7_02_H 


#include <iostream>

struct Sales_data
{
    std::string isbn() const {return bookNo;}
    Sales_data & combine(Sales_data &);

    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

Sales_data & Sales_data::combine(Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif
