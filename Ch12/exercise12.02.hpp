#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <exception>
#include <stdexcept>

class StrBlob 
{
  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    std::string &front();
    std::string &back();

    std::string &front() const;
    std::string &back() const;

  private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;

};

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) { }

std::string& StrBlob::front()
{
  check(0, "front on empty StrBlob");
  return data->front();
}

std::string& StrBlob::back()
{
  check(0, "back on empty StrBlob");
  return data->back();
}

std::string& StrBlob::front() const 
{
  check(0, "front on empty StrBlob");
  return data->front();
}

std::string& StrBlob::back() const
{
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::check(size_type i, const std::string &msg) const
{
  if (i >= data->size())
    throw std::out_of_range(msg);
}
