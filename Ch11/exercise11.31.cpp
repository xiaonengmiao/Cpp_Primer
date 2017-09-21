#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  multimap<string, string> m = {
                            {"alan","DMA"},{"pezy","LeetCode"},
                            {"alan","CLRS"},{"wang","FTP"},
                            {"pezy","CP5"},{"wang","CPP-Concurrency"}
  };
  
  auto found = m.find("pezy");
  auto count = m.count("pezy");
  while (count)
  {
    if (found->second == "CP5")
    {
      m.erase(found);
      break;
    }
    ++found;
    --count;
  }

  for (const auto &author : m)
  {
    cout << author.first << " " << author.second << endl;
  }

  return 0;
}
