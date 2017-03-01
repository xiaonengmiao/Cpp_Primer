#ifndef EXERCISE7_04_H
#define EXERCISE7_04_H

#include <iostream>

struct Person 
{
    public:
        std::string get_name() const {return name;}
        std::string get_address() const {return address;}

    std::string name;
    std::string address;
};

#endif
