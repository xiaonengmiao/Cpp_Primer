#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
  vector<int> vec1{1, 2, 3, 4};
  vector<int> vec2{1, 2, 3, 4, 5};
  list<int> lis{1, 2, 3, 4};

  cout << (vector<int>(lis.begin(),lis.end()) == vec1 ? "true" : "false") << endl;
  cout << (vector<int>(lis.begin(),lis.end()) == vec2 ? "true" : "false") << endl;

  return 0;
}
