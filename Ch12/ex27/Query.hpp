#ifndef QUERY_H
#define QUERY_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

class QueryResult;
class TextQuery
{
  public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;

  private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

class QueryResult
{
  friend std::ostream& print(std::ostream &, const QueryResult &);
  public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<TextQuery::line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
      sought(s), lines(p), file(f) { }
  private:
    std::string sought;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

TextQuery::TextQuery(std::ifstream &is): file(new std::vector<std::string>)
{
  std::string text;
  while (std::getline(is, text))
  {
    file->push_back(text);
    int n = file->size() - 1;
    std::istringstream line(text);
    std::string word;
    while (line >> word)
    {
      auto &lines = wm[word];
      if (!lines)
      {
        lines.reset(new std::set<line_no>);
      }
      lines->insert(n);
    }
  }
}

std::ostream& print(std::ostream &, const QueryResult &);

#endif
