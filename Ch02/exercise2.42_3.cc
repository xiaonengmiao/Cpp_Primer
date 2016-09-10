// 

#include <iostream>
#include "Sales_data.h"

int main()
{
  Sale_data total;
  double totalPrice;
  if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
  {
    total.CalcRevenue(totalPrice);

    Sale_data trans;
    double transPrice;
    while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice)
    {
      trans.CalcRevenue(transPrice);

      if (total.bookNo == trans.bookNo)
      {
	total.AddData(trans);
      }
      else
      {
	total.Print();
	total.SetData(trans);
      }
    }
    total.Print();
    return 0;
  }
  else
  {
    std::cerr << "error: no sales at all" << std::endl;
    return -1;
  }
}
