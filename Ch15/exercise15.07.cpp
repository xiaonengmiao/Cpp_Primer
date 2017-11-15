#include <iostream>
#include <string>

#include "quote.hpp"
#include "bulk_quote.hpp"
#include "limit_quote.hpp"

double print_total (std::ostream& os, const Quote& item, size_t n);
int main()
{
    // ex15.6
    Quote q("textbook", 10.60);
    Bulk_quote bq("textbook", 10.60, 10, 0.3);
    Limit_quote lq("Bible", 10.60, 10 , 0.3);

    print_total(std::cout, q, 5);
    print_total(std::cout, bq, 5);
    print_total(std::cout , lq, 5);

    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN:" << item.isbn()
       << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
