#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
  cout << "please enter some words here:" << endl;
  map<string, size_t> word_count;
  string word;
  set<string> exclude = {"example.", "example,", "Example"};
  while (cin >> word)
  {
    if (exclude.find(word) == exclude.end()) ++word_count[word];
  }
  for (const auto &w : word_count)
  {
    cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
  }

  return 0;
}
