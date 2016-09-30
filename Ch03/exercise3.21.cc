#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

void CheckPrint(const vector<int> &vec)
{
  cout << "size: " << vec.size() << " constent: [";
  for (auto it = vec.begin(); it != vec.end(); ++it)
    cout << *it << (it != vec.end()-1 ? ",":"");
  cout << "]\n" << endl;
}

void CheckPrint(const vector<string> &vec)
{
  cout << "size: " << vec.size() << " constent: [";
  for (auto it = vec.begin(); it != vec.end(); ++it)
    cout << *it << (it != vec.end()-1 ? ",":"");
  cout << "]\n" << endl;
}

int main()
{
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  CheckPrint(v1);
  CheckPrint(v2);
  CheckPrint(v3);
  CheckPrint(v4);
  CheckPrint(v5);
  CheckPrint(v6);
  CheckPrint(v7);

  return 0;
}
