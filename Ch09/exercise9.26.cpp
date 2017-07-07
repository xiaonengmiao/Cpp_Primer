#include<iostream>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  vector<int> vec(begin(ia), end(ia));
  list<int> lis(begin(ia), end(ia));

  for(auto i = vec.begin(); i!= vec.end(); ++i)
  {
    if(*i%2==0)
      vec.erase(i);
  }

  for(auto i = lis.begin(); i!= lis.end(); ++i)
  {
    if(*i%2!=0)
      lis.erase(i);
  }

  for(auto i : vec)
    cout << i << " ";
  cout << endl;

  for(auto i : lis)
    cout << i << " ";
  cout << endl;

  return 0;
}
