#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote 
{
  public:
    Quote() = default;
    Quote(const std::string &book, double sales_price): bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }

    virtual double net_price(std::size_t n) const { return n * price; }
    virtual void debug() const;
    virtual ~Quote() = default;
  private:
    std::string bookNo;
  protected:
    double price = 0.0;
};

void Quote::debug() const
{
  std::cout << "data members of this class:\n"
    << "bookNo= " << this->bookNo << " "
    << "price= " << this->price << " ";
}

#endif
