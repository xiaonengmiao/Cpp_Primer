#include <iostream>
#include "include/Sales_item.h"

int main()
{
  Sales_item currItem, nextItem;
  std::cin >> currItem;
  int cnt = 1;
  while (std::cin >> nextItem)
  {
    if (currItem.isbn() ==  nextItem.isbn()) 
      ++cnt;
    else
    {
      std::cout << currItem << " occurs " 
	        << cnt << " times" << std::endl;
      currItem = nextItem;
      cnt = 1;
    }
  }
  std::cout << currItem << " occurs "
            << cnt << " times" << std::endl;

  return 0;
}
