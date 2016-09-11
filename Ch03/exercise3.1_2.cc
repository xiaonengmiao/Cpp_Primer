// rewrite with 'using' declarations

#include <iostream>
#include "../Ch02/Sales_data.h"

using namespace::std;

int main()
{
  Sale_data total;
  double totalPrice;
  // read into total
  if (cin >> total.bookNo >> total.units_sold >> totalPrice)
  {
    total.CalcRevenue(totalPrice);

    Sale_data trans;
    double transPrice;
    // read into trans
    while (cin >> trans.bookNo >> trans.units_sold >> transPrice)
    {
      // calculate revenue
      trans.CalcRevenue(transPrice);

      // check whether total and trans have the same ISBN
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
    // print the result: total revenue, total sold, and average prince
    total.Print();
    return 0;
  }
  else
  {
    cerr << "error: no sales at all" << endl;
    return -1;
  }
}
