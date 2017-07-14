#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string sentence{"This is (pezy)."};
  stack<char> stk;
  bool opSeen = false;
  for (auto &i : sentence)
  {
    if (i == '(')
    {
      opSeen = true;
      continue;
    }
    else if (i == ')')
    {
      opSeen = false;
    }

    if (opSeen)
    {
      stk.push(i);
    }
  }

  string repstr;
  while (!stk.empty())
  {
    repstr += stk.top();
    stk.pop();
  }

  sentence.replace(sentence.find("(") + 1, repstr.size(), repstr);

  cout << sentence << endl;

  return 0;
}
