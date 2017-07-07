#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
  vector<string> vec{"first", "second", "third"};
  cout << vec.at(0) << endl;
  cout << vec[0] << endl;
  cout << vec.front() << endl;
  cout << *vec.begin() << endl;

  return 0;
}
