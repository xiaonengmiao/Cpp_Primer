#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
  forward_list<int> lis = {0,1,2,3,4,5,6,7,8,9,0};
  auto iter = lis.begin();
  auto prev = lis.before_begin();
  while (iter != lis.end())
  {
    if (*iter % 2)
    {
      iter = lis.insert_after(prev, *iter);
      advance(iter, 2);
      advance(prev, 2);
    }
    else
    {
      iter = lis.erase_after(prev);
    }
  }
  for (auto i:lis)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
