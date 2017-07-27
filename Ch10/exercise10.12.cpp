#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../Ch07/exercise7.26.hpp" // Sales_data class

using namespace std;

inline bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
  return sd1.isbn().size() < sd2.isbn().size();
}

int main()
{
  Sales_data sd1("booook"), sd2("book2"), sd3("book1"), sd4("aook");
  vector<Sales_data> v{ sd1, sd2, sd3, sd4 };

  sort(v.begin(),v.end(),compareIsbn);

  for (const auto &elem : v)
    cout << elem.isbn() << " ";
  cout << endl;

  return 0;
}
