#include <iostream>
#include <vector>

using namespace::std;

int main()
{
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt]={0};
  using int_array = int[4];
  // using a range for
  for (int_array &row : ia)
    for (auto &col : row)
      cout << col << " ";
  cout << endl;
  // using pointers
  for (int_array *q=ia; q!=ia+rowCnt; ++q)
    for (auto p=*q; p!=*q+colCnt; ++p)
      cout << *p << " ";
  cout << endl;
  // using subscripts
  for (size_t i=0; i!=rowCnt; ++i)
    for (size_t j=0; j!=colCnt; ++j)
      cout << ia[i][j] << " ";
  cout << endl;

  return 0;

}
