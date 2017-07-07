#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
  string str;
  list<string> lis;
  while(cin >> str)
  {
    lis.push_back(str);
  }

  for(auto i=lis.cbegin(); i!=lis.cend();i++)
  {
    cout << *i << " ";
  }
  cout << endl;

  return 0;
}
