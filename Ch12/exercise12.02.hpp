#include <iostream>

class StrBlob 
{
  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    std::string &front();
    std::string &back();

  private:
    std::shared_ptr<std::vector<std::string>> data;


};

StrBlob::StrBlob(): data(make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il): data(make_shared<std::vector<std::string>>(il) { }

std::string& StrBlob::front() const 
{
    return data->front();
}

std::string& StrBlob::back() const
{
    return data->back();
}
