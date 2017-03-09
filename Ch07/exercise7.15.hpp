#ifndef EXERCISE7_09_H
#define EXERCISE7_09_H

#include <iostream>

struct Person;
std::istream &read(std::istream&, Person&);

struct Person 
{
    // add constructors
    Person() = default;
    Person(std::string &s1): name(s1) { };
    Person(std::string &s1, std::string &s2): name(s1), address(s2) { };
    Person(std::istream &is) { read(is, *this); };

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
