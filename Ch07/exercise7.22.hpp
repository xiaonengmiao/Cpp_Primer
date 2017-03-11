#ifndef EXERCISE7_22_H
#define EXERCISE7_22_H

#include <iostream>

struct Person;
std::istream &read(std::istream&, Person&);

struct Person 
{
    friend std::istream &read(std::istream &, Person &);
    friend std::ostream &print(std::ostream &, const Person &);
    // add constructors
    public:
        Person() = default;
        Person(std::string &s1): name(s1) { };
        Person(std::string &s1, std::string &s2): name(s1), address(s2) { };
        Person(std::istream &is) { read(is, *this); };

        std::string get_name() const {return name;}
        std::string get_address() const {return address;}

    private:
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
