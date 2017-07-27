#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline bool fiveorMore(const string &str)
{
  return 4<str.size();
}

int main()
{
  string str1("booook"), str2("book2"), str3("book1"), str4("aook");
  vector<string> v{ str1, str2, str3, str4 };

  auto part = partition(v.begin(),v.end(),fiveorMore);

  for (auto it = v.begin(); it != part; ++it)
    cout << *it << " ";
  cout << endl;

  return 0;
}
