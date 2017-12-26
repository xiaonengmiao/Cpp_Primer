#include <iostream>
#include <vector>
#include <string>

#include "quote.hpp"
#include "bulk_quote.hpp"
#include "disc_quote.hpp"

int main()
{
  std::vector<Quote> basket;
  for (unsigned i = 0; i != 10; ++i)
  {
    basket.push_back(Bulk_quote("sss", i * 10.1, 10, 0.3));
  }

  double total = 0;
  for (const auto &b : basket)
  {
    total += b.net_price(20);
  }
  std::cout << total << std::endl;
  std::cout << "======================\n\n";

  /**
    * @brief ex15.29   outccome == 6363
    */
  std::vector<std::shared_ptr<Quote>> pv;

  for(unsigned i =1; i != 10; ++i)
    pv.push_back(std::make_shared<Bulk_quote>(Bulk_quote("sss", i * 10.1, 10, 0.3)));

  double total_p = 0;
  for (auto p : pv)
  {
    total_p +=  p->net_price(20);
  }
    std::cout << total_p << std::endl;

  return 0;
}
