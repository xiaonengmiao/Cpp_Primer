#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main()
{
  map<string, vector<pair<string, string>>> families;
  for (string fn; cout << "enter family name:", cin >> fn;)
  {
    for (string cn, bir; cout << "enter children names and birthdays:", cin >> cn >> bir;)
    {
      families[fn].push_back(pair<string, string>(cn, bir));
    }
  }

  for (const auto &p : families)
  {
    cout << p.first << "\n";
    for (const auto &c : p.second)
    {
      cout << c.first << " " << c.second << endl;
    }
  }

  return 0;
}

