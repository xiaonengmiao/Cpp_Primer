#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main()
{
  multimap<string, string> m = {
                            {"alan","DMA"},{"pezy","LeetCode"},
                            {"alan","CLRS"},{"wang","FTP"},
                            {"pezy","CP5"},{"wang","CPP-Concurrency"}
  };
  std::map<string, std::multiset<string>> order_authors;
  for (const auto &author : m)
  {
    order_authors[author.first].insert(author.second);
  }
  for (const auto &author : order_authors) 
  {
    std::cout << author.first << ": ";
    for (const auto &work : author.second)
    {
      std::cout << work << " ";
      std::cout << std::endl;
    }
  }  

  return 0;
}
