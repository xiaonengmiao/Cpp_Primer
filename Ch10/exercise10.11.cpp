#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
template<typename Sequence>
inline ostream &println(Sequence const &seq)
{
  for (auto const &elem : seq)
  {
    cout << elem << " ";
  }
  cout << endl;

  return cout;
}

inline bool is_shorter(string const &lhs, string const &rhs)
{
  return lhs.size() < rhs.size();
}

void elimDups(vector<string> &vec)
{
  sort(vec.begin(),vec.end());
  auto end_unique = unique(vec.begin(),vec.end());
  vec.erase(end_unique,vec.end());
}

int main()
{
  vector<string> vec{"fox","jumps","over","quick","red","red","slow","the","the","turtle"};
  elimDups(vec);
  stable_sort(vec.begin(),vec.end(),is_shorter);
  println(vec);

  return 0;
}
