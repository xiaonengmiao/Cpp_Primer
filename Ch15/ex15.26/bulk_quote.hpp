#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "disc_quote.hpp"

class Bulk_quote : public Disc_quote
{
  public:
    // default constructor
    Bulk_quote() { std::cout << "Bulk_quote: default constructor" << std::endl; }
    Bulk_quote(const std::string &s, double p, std::size_t q, double disc) : 
      Disc_quote(s, p, q, disc) { std::cout << "Bulk_quote: constructor taking 4 parameters" << std::endl; }

    // copy constructor
    Bulk_quote(Bulk_quote &bq) : Disc_quote(bq)
    { std::cout << "Bulk_quote: copy constructor" << std::endl; }
    // move constructor
    Bulk_quote(Bulk_quote &&bq) : Disc_quote(std::move(bq)) { std::cout << "Bulk_quote: move constructor" << std::endl; }

    // copy =
    Bulk_quote &operator=(Bulk_quote &rhs)
    {
      Disc_quote::operator=(rhs);
      std::cout << "Bulk_quote: copy =" << std::endl;

      return *this;
    }

    // move =
    Bulk_quote &operator=(Bulk_quote &&rhs) noexcept
    {
      Disc_quote::operator=(std::move(rhs));
      std::cout << "Bulk_quote: move =" << std::endl;

      return *this;
    }

    double net_price(std::size_t n) const override;
    void debug() const override;

    ~Bulk_quote() override
    {
      std::cout << "Bulk_quote: destructor" << std::endl;
    }

};


#endif
