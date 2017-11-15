#include <iostream>
#include <string>

#include "quote.hpp"
#include "bulk_quote.hpp"

double print_total(std::ostream &os, const Quote &item, std::size_t n)
{
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;

  return ret;
}

int main()
{
  Quote q("textbook", 10.60);
  Bulk_quote bq("textbook", 10.60, 10, 0.3);

  print_total(std::cout, q, 12);
  print_total(std::cout, bq, 12);

  return 0;
}
