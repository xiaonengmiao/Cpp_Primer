#include <iostream>
#include <vector>

using namespace::std;

int main()
{
  int ar1[] = {1, 2, 3, 4, 5};
  vector<int> v(begin(ar1), end(ar1));

  for (auto &i : v)
    cout << i << " ";
  cout << endl;

  return 0;
}
