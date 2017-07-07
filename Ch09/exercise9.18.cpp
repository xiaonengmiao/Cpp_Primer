#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
  string str;
  deque<string> deq;
  while(cin >> str)
  {
    deq.push_back(str);
  }

  for(deque<string>::iterator i=deq.begin(); i!=deq.end();i++)
  {
    cout << *i << " ";
  }
  cout << endl;

  return 0;
}
