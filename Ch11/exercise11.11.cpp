#include <iostream>
#include <set>
#include "../Ch07/exercise7.26.hpp"

using namespace std;

auto less(Sales_data const& lhs, Sales_data const& rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{
    using Less = bool (*)(Sales_data const&, Sales_data const&);
    multiset<Sales_data, Less> bookstore(less);

    return 0;
}
