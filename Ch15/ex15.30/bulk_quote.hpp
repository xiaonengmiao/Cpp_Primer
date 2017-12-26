#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "disc_quote.hpp"

class Bulk_quote : public Disc_quote
{
  public:
    // default constructor
    Bulk_quote() { std::cout << "Bulk_quote: default constructor" << std::endl; }
    // changed the below to the inherited constructor for ex15.27.
    // rules:  1. only inherit from the direct base class.
    //         2. default, copy and move constructors can not inherit.
    //         3. any data members of its own are default initialized.
    //         4. the rest details are in the section section 15.7.4.
    /*
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
        Disc_quote(b, p, q, disc) { std::cout << "Bulk_quote : constructor taking 4 parameters\n"; }
    */
    using Disc_quote::Disc_quote;

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

    // clone self
    virtual Bulk_quote* clone() const & { return new Bulk_quote(*this); }
    virtual Bulk_quote* clone() &&      { return new Bulk_quote(std::move(*this)); }
    double net_price(std::size_t n) const override;
    void debug() const override;

    ~Bulk_quote() override
    {
      std::cout << "Bulk_quote: destructor" << std::endl;
    }

};


#endif
