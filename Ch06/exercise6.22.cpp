#include <iostream>

using namespace std;

void swap_ints(int *&i, int *&j)
{
  auto k = i;
  i = j;
  j = k;
}

int main()
{
  int ii = 8;
  int jj = 9;
  int *i = &ii;
  int *j = &jj;
  swap_ints(i,j);
  cout << *i << " " << *j << endl;

  return 0;
}
