#include <iostream>
#include <string>

#include "quote.hpp"
#include "bulk_quote.hpp"
#include "limit_quote.hpp"

void print_debug(const Quote &q);
double print_total(std::ostream &os, const Quote &q, std::size_t n);

int main()
{
  Quote q("qwe", 8.9);
  Bulk_quote bq("asd", 111, 23, 0.2);
  Limit_quote lq("zxc", 123, 43, 0.4);

/** @note   Not dynamic binding!
     *  The codes below are not dynamic binding. The compiler has known what the
     *  r refering to at compile time. As a result, the virtual function debug of
     *  the subobject is called.
     */
    Quote& r = q;
    r.debug();
    std::cout << "\n";
    r = bq;
    r.debug();
    std::cout << "\n";
    r = lq;
    r.debug();
    std::cout << "\n";


    std::cout << "====================\n";

    /** @note   dynamic binding!
     *  The below will happen dynamic binding. The reason might be that while  print_debug
     *  compiling the compiler compile it independly from the rest codes. The compiler has
     *  no idea what the paramter q refering to. Thus compiler will leave the decision to
     *  run time. That is, dynamic binding.
     *
     *  Once dynamic binding happens, the corresponding vertual function in derived class will
     *  be called rather than that of the subobject inside the derived object.
     *
     *  Anyway, the reference is essentially an address being passed.
     *
     */
    print_debug(q);
    std::cout << "\n";
    print_debug(lq);
    std::cout << "\n";
    print_debug(bq);
    std::cout << "\n";

  return 0;
}

void print_debug(const Quote &q)
{
  q.debug();
}

double print_total(std::ostream &os, const Quote &q, std::size_t n)
{
  double ret = q.net_price(n);

  os << "ISBN:" << q.isbn() << "# sold: " << n << " total due: " << ret << std::endl;

  return ret;
}
