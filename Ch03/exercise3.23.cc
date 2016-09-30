// write a vector with ten elements 
// and assign each of them twice as its current value.


#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace::std;

int main()
{
  vector<int> vec(10,1);
  for (auto it = vec.begin(); it != vec.end(); ++it)
  {
    *it = *it * 2;
    cout << *it << (it != vec.end()-1 ? " ":"\n");
  }

  return 0;
}
