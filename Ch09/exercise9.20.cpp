#include<iostream>
#include<deque>
#include<list>

using namespace std;

int main()
{
  list<int> lis{1, 2, 3, 4, 5, 6, 7};
  deque<int> even;
  deque<int> odd;
  for(auto i : lis)
  {
    (i%2 == 0 ? even : odd).push_back(i);
  }

  for(auto i = even.cbegin();i != even.cend();i++)
  {
    cout << *i << " ";
  }
  cout << "are even numbers" << endl;

  for(auto i = odd.cbegin();i != odd.cend();i++)
  {
    cout << *i << " ";
  }
  cout << "are odd numbers" << endl;

  return 0;
}
