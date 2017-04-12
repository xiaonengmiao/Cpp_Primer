#include <iostream>
#include <string>

using namespace std;

bool any_capital(const string &str)
{
  for (auto c : str)
  {
    if (isupper(c))
      return true;
  }
  return false;
}

void to_lowercase(string &str)
{
  for (auto &c : str)
    c = tolower(c);
}

int main()
{
  string str("Hello World");
  cout << any_capital(str) << endl;

  to_lowercase(str);
  cout << str << endl;

  return 0;
}
