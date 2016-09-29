// read a set of integers into a vector

#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main()
{
  vector<int> ivec;
  for (int i; cin >> i; ivec.push_back(i));

  if (ivec.empty())
  {
    cout << "input at least one integer." << endl;
    return -1;
  }

  if (ivec.size() == 1)
  {
    cout << "only one integer " << ivec[0] << ", it does not have any adjacent elements." << endl;
    return -1;
  }

  auto cnt = ivec.size();
  if (cnt % 2 != 0) cnt = cnt/2 + 1;
  else cnt = cnt/2;

  for (decltype(ivec.size()) i = 0; i != cnt; ++i)
  {
    cout << ivec[i] + ivec[ivec.size()-i-1] << " ";
  }
  cout << endl;
  
  return 0;
}
