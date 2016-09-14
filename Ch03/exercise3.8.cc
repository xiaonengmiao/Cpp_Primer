// two approaches to range

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str("Hello World!!!");
  // while loop
  decltype(str.size()) index = 0;
  while (index < str.size()) 
  {
    str[index++] = 'X';
  }
  cout << str << endl;

  // for loop
  for (index = 0; index != str.size(); ++index) 
  {
    str[index] = 'Y';
  }
  cout << str << endl;

  return 0;
}
