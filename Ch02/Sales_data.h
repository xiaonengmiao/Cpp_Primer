#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sale_data
{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  void CalcRevenue(double price);
  double CalcAveragePrice();
  void SetData(Sale_data data);
  void AddData(Sale_data data);
  void Print();
};

void Sale_data::CalcRevenue(double price)
{
  revenue = units_sold * price;
}

void Sale_data::SetData(Sale_data data)
{
  bookNo = data.bookNo;
  units_sold = data.units_sold;
  revenue = data.revenue;
}

void Sale_data::AddData(Sale_data data)
{
  if (bookNo != data.bookNo) return;
  units_sold += data.units_sold;
  revenue += data.revenue;
}

double Sale_data::CalcAveragePrice()
{
  if (units_sold != 0)
    return revenue / units_sold;
  else
    return 0.0;
}

void Sale_data::Print()
{
  std::cout << bookNo << " " << units_sold << " " << revenue << " ";
  double averagePrice = CalcAveragePrice();
  if (averagePrice != 0.0)
    std::cout << averagePrice << std::endl;
  else
    std::cout << "error: no sales at all" << std::endl;
}

#endif
