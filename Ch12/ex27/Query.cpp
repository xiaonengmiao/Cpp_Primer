#include "Query.hpp"
#include <sstream>
#include <algorithm>

QueryResult TextQuery::query(const string &str) const
{
  static shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
  auto loc = wm.find(str);
  if (loc == wm.end())
    return QueryResult(str, nodata, file);
  else
    return QueryResult(str, loc->second, file);
}

std::ostream& print(std::ostream &os, const QueryResult &qr)
{
  os << qr.sought << " occurs" << qr.lines->size() << (qr.lines->size() > 1 ? " times" : " time") << std::endl;
  for (auto num : *qr.lines)
  {
    os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << std::endl;
  }

  return os;
}
