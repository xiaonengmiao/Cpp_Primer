#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include <iostream>
#include <string>
#include <memory>

#include "textquery.hpp"
#include "queryresult.hpp"

class Query_base
{
  friend class Query;
protected:
  using line_no = TextQuery::line_no; // used in the eval function
  virtual ~Query_base() = default;

private:
  // return QueryResult that matches this query
  virtual QueryResult eval(const TextQuery &) const = 0;

  // a string represenation of this query
  virtual std::string rep() const = 0;
};

#endif // QUERY_BASE_H
