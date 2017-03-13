#ifndef EXERCISE_7_26_H
#define EXERCISE_7_26_H

#include <iostream>
#include <string>

struct Sales_data;
std::istream& read(std::istream &, Sales_data&);

struct Sales_data
{
    // friend
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend Sales_data add(const Sales_data&, const Sales_data&);
    
    // constructors
    public:
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) {};
    Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {};
    Sales_data(std::istream &is) { read(is, *this); };

    //
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    private:
    inline double avg_price() const;
    private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions
Sales_data& Sales_data::combine(const Sales_data &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

// nonmember functions
std::istream& read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

inline
double Sales_data::avg_price() const
{
    return units_sold ? revenue/units_sold : 0;
}

#endif
