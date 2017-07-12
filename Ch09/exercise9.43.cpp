#include<iostream>
#include<string>

using namespace std;

void replace_with(string &s, string const &oldVal, string const &newVal)
{
  for (auto iter = s.begin(); iter <= s.end() - oldVal.size();)
  {
    if (string{iter, iter+oldVal.size()} == oldVal)
    {
      iter = s.erase(iter, iter+oldVal.size());
      iter = s.insert(iter, newVal.begin(), newVal.end());
      iter += newVal.size();
    }
    else
    {
      ++iter;
    }
   }
}

int main()
{
  string s{ "To drive straight thru is a foolish, tho courageous act." };
  replace_with(s, "tho", "though");
  replace_with(s, "thru", "through");
  cout << s << endl;

  return 0;
}

