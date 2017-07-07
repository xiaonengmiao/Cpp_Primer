#include<iostream>
#include<vector>
#include<string>
#include<forward_list>

using namespace std;

int main()
{
  forward_list<int> flis = {1, 2, 3, 4, 5, 6};
  auto prev = flis.before_begin();
  auto curr = flis.begin();
  while(curr != flis.end())
  {
    if(*curr%2 != 0)
    {
      curr = flis.erase_after(prev);
      ++prev;
    }
    else
    {
      prev = curr;
      ++curr;
    }
  }

  for(auto i = flis.begin(); i != flis.end(); ++i)
  {
    cout << *i << " ";
  }
  cout << endl;

  return 0;
}
