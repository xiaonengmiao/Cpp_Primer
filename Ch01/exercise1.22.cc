#include <iostream>
#include "include/Sales_item.h"

int main()
{
  Sales_item total, item;
  std::cin >> total;
  while (std::cin >> item)
  {
    if (total.isbn() == item.isbn())
      total += item;
    else
    {
      std::cout << total << std::endl;
      total = item;
    }
    std::cout << total << std::endl;
  }

  return 0;
}
