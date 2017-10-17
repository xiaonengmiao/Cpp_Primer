#include <iostream>

using namespace std;

int larger_one(const int i, const int *j)
{
  return (i > *j) ? i : *j;
}

int main()
{
  int i = 2;
  int *j = &i;
  cout << larger_one(1, j) << endl;
  
  return 0;
}
