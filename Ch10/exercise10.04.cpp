#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector<double> vec{1.1, 2.2};
  int sum = accumulate(vec.cbegin(), vec.cend(), 0);
  cout << sum << endl; // result is 3 rather than 3.3

  return 0;
}
