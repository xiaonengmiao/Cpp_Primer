// 

#include <iostream>
#include <string>

struct Sales_data
{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue;
};

int main()
{
  Sales_data total;
  double totalPrice;
  if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
  {
    total.revenue = total.units_sold * totalPrice;

    Sales_data trans;
    double transPrice;
    while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice)
    {
      trans.revenue = trans.units_sold * transPrice;

      if (total.bookNo == trans.bookNo)
      {
	total.units_sold += trans.units_sold;
	total.revenue += trans.revenue;
      }
      else
      {
	std::cout << total.bookNo << " " << total.units_sold << " " << totalPrice << " ";
	if (total.units_sold != 0)
	  std::cout << total.revenue / total.units_sold << std::endl;
	else
	  std::cout << "error: no sales at all" << std::endl;

	total.bookNo = trans.bookNo;
	total.units_sold = trans.units_sold;
	total.revenue = trans.revenue;
      }
    }
    std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
      if (total.units_sold != 0)
	  std::cout << total.revenue / total.units_sold << std::endl;
      else
	  std::cout << "error: no sales at all" << std::endl;
      return 0;
  }
  else
      {
	std::cerr << "No data?!" << std::endl;
	return -1;
      }
}
