#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote
{
  friend bool operator !=(const Quote &lhs, const Quote &rhs);
  public:
    // define constructor
    Quote() { std::cout << "Quote: default constructor" << std::endl; }
    Quote(const std::string s, double p) : bookNo(s), price(p) { std::cout << "Quote: two parameters constructor" << std::endl; }

    // copy constructor
    Quote(const Quote &q) : bookNo(q.bookNo), price(q.price) { std::cout << "Quote: copy constructor" << std::endl; }
    // move constructor
    Quote(Quote&& q) noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price)) { std::cout << "Quote: move constructor" << std::endl; }

    // copy =
    Quote &operator=(const Quote &rhs) 
    {
      if (*this != rhs)
      {
        bookNo = rhs.bookNo;
        price = rhs.price;
      }
      std::cout << "Quote: copy =" << std::endl;

      return *this;
    }
    // move =
    Quote &operator=(Quote&& rhs) noexcept
    {
      if (*this != rhs)
      {
        bookNo = std::move(rhs.bookNo);
        price = std::move(rhs.price);
      }
      std::cout << "Quote: move =" << std::endl;

      return *this;
    }

    virtual ~Quote() { std::cout << "Quote: destructor" << std::endl; }

    // clone self
    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() &&      { return new Quote(std::move(*this)); }


    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual void debug() const;

  private:
    std::string bookNo;
  protected:
    double price = 0.0;

};

bool inline
operator !=(const Quote &lhs, const Quote &rhs)
{
  return lhs.bookNo != rhs.bookNo && lhs.price != rhs.price;
}

// non-member
double print_total(std::ostream &os, const Quote &item, size_t n);


#endif


