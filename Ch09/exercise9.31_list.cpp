#include<iostream>
#include<list>

using namespace std;

int main()
{
  list<int> lis = {0,1,2,3,4,5,6,7,8,9,0};
  auto iter = lis.begin();
  while (iter != lis.end())
  {
    if (*iter % 2)
    {
      iter = lis.insert(iter, *iter);
      advance(iter, 2);
    }
    else
    {
      iter = lis.erase(iter);
    }
  }
  for (auto i:lis)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
