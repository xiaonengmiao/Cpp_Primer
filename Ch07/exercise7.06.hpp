#ifndef EXERCISE7_02_H
#define EXERCISE7_02_H 


#include <iostream>

struct Sales_data
{
    std::string isbn() const {return bookNo;}
    Sales_data & combine(const Sales_data &);

    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream & os, Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum(data1);
    sum.combine(data2);
    return sum;
}


#endif
