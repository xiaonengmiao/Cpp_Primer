#include <iostream>
#include <vector>

using namespace::std;

int main()
{
  vector<int> v{0, 1, 2, 3, 4, 5};
  int ar[6];
  for (int i=0; i!=v.size(); ++i)
    ar[i] = v[i];

  for (auto i : ar)
    cout << i << " ";
  cout << endl;
}
