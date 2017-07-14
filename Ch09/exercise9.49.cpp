#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
  string ascdes{"tdhfklbqypgj"};

  ifstream ifs("../data/letter.txt");
  if (!ifs) return -1;

  string word;
  string longword;
  unsigned len = 0;
  while (ifs >> word)
  {
    if (word.find_first_of(ascdes) == string::npos && word.size() > len)
    {
      len = word.size();
      longword = word;
    }
  }

  cout << "The Longest word contains neigher ascenders nor descenders is " << longword;
  cout << endl;

  return 0;
}
