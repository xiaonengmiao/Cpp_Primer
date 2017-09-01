#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  map<string, vector<string>> family;
  cout << "enter some family names as well as children names here:" << endl;
  for (string fn; cout << "enter family name:", cin >> fn && fn != "@q";)
  {
    for (string cn; cout << "enter children names:", cin >> cn && cn != "@q";)
    {
      family[fn].push_back(cn);
    }
  }
  for (const auto &f : family)
  {
    cout << f.first << ":\n";
    for (const auto &c : f.second)
    {
      cout << c << " ";
    }
    cout << endl;
  }

  return 0;
}
