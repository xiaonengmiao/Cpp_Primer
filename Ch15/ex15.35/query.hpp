#ifndef QUERY_H
#define QUERY_H

#include <iostream>
#include <memory>
#include <string>

#include "query_base.hpp"
#include "queryresult.hpp"
#include "textquery.hpp"
#include "wordquery.hpp"

class Query
{
  friend Query operator~(const Query&);
  friend Query operator|(const Query&);
  friend Query operator&(const Query&);
public:
  // build a new WordQuery
  Query(const std::string &s) : q(new WordQuery(s))
  {
    std::cout << "Query::Query(const std::string &s) where s="+s+"\n";
  }

  // interface functions: call the corresponding Query_base operations
  QueryResult eval(const TextQuery &t) const
  {
    return q->eval(t);
  }
  std::string rep() const
  {
    std::cout << "Query::rep() \n";
    return q->rep();
  }

private:
  // constructor only for friends
  Query(std::shared_ptr<Query_base> query) : q(query)
  {
    std::cout << "Query::Query(std::shared_ptr<Query_base> query) \n";
  }
  std::shared_ptr<Query_base> q;
};

#endif // QUERY_H
