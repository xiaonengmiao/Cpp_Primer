#include <iostream>
#include <string>
#include <functional>
#include <map>

#include "quote.hpp"

double print_total(std::ostream &os, const Quote &item, size_t n)
{
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;

  return ret;
}

int main()
{
  Quote item("sb",6);
  print_total(std::cout, item, 5);

  return 0;
}
