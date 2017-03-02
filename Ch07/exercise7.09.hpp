#ifndef EXERCISE7_09_H
#define EXERCISE7_09_H

#include <iostream>

struct Person 
{
    public:
        std::string get_name() const {return name;}
        std::string get_address() const {return address;}

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &item)
{
    is >> item.name >> item.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
    os << item.name << " " << item.address;
    return os;
}

#endif
