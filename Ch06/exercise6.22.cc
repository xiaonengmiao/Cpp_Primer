#include <iostream>

using namespace std;

void swap_ints(int &i, int &j)
{
  int k = i;
  i = j;
  j = k;
}

int main()
{
  int i = 8;
  int j = 9;
  swap_ints(i,j);
  cout << i << " " << j << endl;

  return 0;
}
