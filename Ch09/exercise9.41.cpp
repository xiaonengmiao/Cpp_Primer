#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
  vector<char> vec{ 'p', 'e', 'z', 'y'};
  string str(vec.cbegin(), vec.cend());
  cout << str << endl;

  return 0;
}
