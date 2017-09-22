#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>

using namespace std;

void word_transformation()
{
  ifstream ifs_trans("../data/word_transformation.txt"), ifs_content("../data/given_to_transform.txt");
  if (!ifs_trans || !ifs_content)
  {
    cerr << "can't find the documents." << endl;
    return;
  }

  unordered_map<string, string> trans_map;
  string key;
  string value;
  while (ifs_trans >> key && getline(ifs_trans, value))
  {
    if (value.size() > 1) trans_map[key] = value.substr(1);
  }

  string text;
  while (getline(ifs_content, text))
  {
    istringstream stream(text);
    string word;
    while (stream >> word)
    {
      auto map_it = trans_map.find(word);
      if (map_it != trans_map.cend())
      {
        cout << map_it->second << " ";
      }
      else
      {
        cout << word << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  word_transformation();

  return 0;
}
