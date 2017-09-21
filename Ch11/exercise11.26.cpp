#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
  map<int, string> m = {{1,"zz"},{2,"sb"}};
  int i;
  using KeyType = map<int, string>::key_type;

  cout << "type to subscript: " << typeid(KeyType).name() << endl;
  cout << "return from the subscript operator: " << typeid(decltype(m[1])).name()
       << endl;

  return 0;

}
