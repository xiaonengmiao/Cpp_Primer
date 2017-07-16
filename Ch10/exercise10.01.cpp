#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec;
  int i;
  while (cin >> i)
  {
    vec.push_back(i);
  }
  cout << count(vec.cbegin(),vec.cend(),5) << endl;

  return 0;
}
