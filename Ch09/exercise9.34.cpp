#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector<int> vi = {1,2,3,4,5,6,7,8,9,0}; 
  auto iter = vi.begin();
  while (iter != vi.end())
  {
    if (*iter % 2)
      iter = vi.insert(iter, *iter), ++iter;
    ++iter;
  }
  for (auto i : vi)
    cout << i << " ";
  cout << endl;

  return 0;
}
