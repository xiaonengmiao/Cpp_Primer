#include<iostream>
#include<string>

using namespace std;

int main()
{
  string numbers{"1234567890"};
  string alphabet{"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
  string str{"ab2c3d7R4E6"};

  cout << "numeric characters: ";
  for (int pos = 0; (pos = str.find_first_not_of(alphabet, pos)) != string::npos; ++pos)
      cout << str[pos] << " ";
  cout << "\nalphabetic characters: ";
  for (int pos = 0; (pos = str.find_first_not_of(numbers, pos)) != string::npos; ++pos)
      cout << str[pos] << " ";
  cout << endl;

  return 0;
}
