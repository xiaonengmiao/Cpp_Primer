#include <iostream>
#include <vector>
#include <string>

#include "exercise9.51.hpp"

using namespace std;

class My_date;

ostream &print(ostream &os, const My_date &d)
{
  os << "day: " << d.day << ", month: " << d.month << ", year: " << d.year;
  return os;
}

int main()
{
  My_date d("Jan 1,1900");
  print(cout, d);
  cout << endl;

  return 0;
}
