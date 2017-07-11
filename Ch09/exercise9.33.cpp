#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector<int> v = {1,2,3,4,5,6,7,8,9,0};
  auto begin = v.begin();
  while (begin != v.end())
  {
    ++begin;
    /* begin = */ v.insert(begin, 42);
    ++begin;
  }
  for (auto i : v)
    cout << i << " ";
  cout << endl;

  return 0;
}
