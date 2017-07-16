#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main()
{
  list<string> lis;
  string str;
  while (cin >> str)
  {
    lis.push_back(str);
  }
  cout << count(lis.cbegin(), lis.cend(), "icerm") << endl;

  return 0;
}
