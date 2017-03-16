#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data
{
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

    public:
        Sales_data(std::string s, unsigned cnt, double price): bookNo(s), units_sold(cnt), revenue(cnt*price) 
        { std::cout << "Sales_data(const std::string&, unsigned, double)" << std::endl; };
        Sales_data(): Sales_data("", 0, 0.0f) 
        { std::cout << "Sales_data()" << std::endl; };
        Sales_data(std::string s): Sales_data(s, 0, 0.0f) 
        { std::cout << "Sales_data(const std::string&)" << std::endl; };
        Sales_data(std::istream &is);

        std::string isbn() const { return bookNo; };
        Sales_data &combine(const Sales_data &item);

    private:
        inline double avg_price() const;

    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

inline double Sales_data::avg_price() const 
{
    return units_sold ? revenue / units_sold : 0;
}

Sales_data &Sales_data::combine(const Sales_data &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

Sales_data::Sales_data(std::istream &is): Sales_data()
{
    std::cout << "Sales_data(std::istream &is)" << std::endl;
    read(is, *this);
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


#endif
