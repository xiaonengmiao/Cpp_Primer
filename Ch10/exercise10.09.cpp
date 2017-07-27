#include <iostream>
#include <vector>
#include <string>

using namespace std;

void elimDups(vector<string> &words)
{
  for (auto c : words)
  {
    cout << c << " ";
  }
  cout << endl;

  // sort words alphabetically
  sort(words.begin(),words.end());
  for (auto c : words)
  {
    cout << c << " ";
  }
  cout << endl;

  auto end_unique = unique(words.begin(),words.end());
  // erase uses a vector operation
  words.erase(end_unique, words.end());
  for (auto c : words)
  {
    cout << c << " ";
  }
  cout << endl;
}

int main()
{
  vector<string> words{"fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle"};
  elimDups(words);

  return 0;
}
