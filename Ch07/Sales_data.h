// Add the combine and isbn members to the Sales_data class you wrote for the exercise in 2.6.2
// (p.76)

#ifndef SALES_DATA.H
#define SALES_DATA.H

#include <iostream>
#include <string>

struct Sales_data
{
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    bookNo += rhs.bookNo;
    units_sold += rhs.units_sold;

    return *this;
}

#endif
