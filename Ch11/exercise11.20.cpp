#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map<string, int> word_count;
  string word;
  while (cin >> word)
  {
    ++word_count.insert({word, 0}).first->second;
  }

  for (auto m : word_count)
  {
    cout << m.first << " : " << m.second << endl;
  }

  return 0;
}
