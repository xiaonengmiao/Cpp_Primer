#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
  vector<pair<string, int>> vec;
  string str;
  int i;

  while (cin >> str >> i)
  {
    // vec.push_back(pair<string, int>(str, i));
    // vec.push_back(make_pair(str, i));
    // vec.push_back({ str, i });
    vec.emplace_back(str, i); // ez
  }

  for (const auto &p : vec)
  {
    cout << p.first << ":" << p.second << endl;
  }
  return 0;
}
