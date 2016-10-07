#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace::std;

int main()
{
  // string
  string s1("A string example"), s2("A different string");
  if (s1 == s2)
    cout << "same string" << endl;
  else if (s1 > s2)
    cout << "first is greater" << endl;
  else 
    cout << "second is greater" << endl;

  // C-Style character string
  const char cs1[] = "A string example";
  const char cs2[] = "A different string";
  if (strcmp(cs1, cs2) == 0)
    cout << "same string" << endl;
  else if (strcmp(cs1, cs2) < 0)
    cout << "second is greater" << endl;
  else
    cout << "first is greater" << endl;

  return 0;
}
