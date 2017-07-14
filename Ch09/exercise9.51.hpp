#ifndef EX9_51_H
#define EX9_51_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class My_date
{
  friend ostream &print(ostream &, const My_date &);

  public:
    My_date(string const &str)
    {
      unsigned format = 0;
      if (str.find_first_of("/") == string::npos)
      {
        format = 0x01;
      }

      if (str.find_first_of(',') >= 4 && str.find_first_of(',') != string::npos)
      {
        format = 0x10;
      }

      switch(format)
      {
        case 0x01:
          day = stoi(str.substr(0, str.find_first_of("/")));
          month = stoi(str.substr(str.find_first_of("/") + 1, str.find_last_of("/")-str.find_first_of("/")));
          year = stoi(str.substr(str.find_last_of("/") + 1, 4));
          
          break;

        case 0x10:
          if(str.find("Jan") != string::npos) month = 1;
          if(str.find("Feb") != string::npos) month = 2;
          if(str.find("Mar") != string::npos) month = 3;
          if(str.find("Apr") != string::npos) month = 4;
          if(str.find("May") != string::npos) month = 5;
          if(str.find("Jun") != string::npos) month = 6;
          if(str.find("Jul") != string::npos) month = 7;
          if(str.find("Aug") != string::npos) month = 8;
          if(str.find("Sep") != string::npos) month = 9;
          if(str.find("Oct") != string::npos) month = 10;
          if(str.find("Nov") != string::npos) month = 11;
          if(str.find("Dec") != string::npos) month = 12;

          day = stoi(str.substr(str.find_first_of("1234567890"),str.find_first_of(",") - str.find_first_of("1234567890")));
          year = stoi(str.substr(str.find_first_of(",") + 1,4));

          break;
      }
    }

  private:
    unsigned year;
    unsigned month;
    unsigned day;
};

ostream &print(ostream &, const My_date &);

#endif
