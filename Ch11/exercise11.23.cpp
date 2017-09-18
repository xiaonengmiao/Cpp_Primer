#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  multimap<string, string> families;
  for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
  for (auto family : families)
  {
    cout << family.second << " " << family.first << endl;
  }

  return 0;
}
