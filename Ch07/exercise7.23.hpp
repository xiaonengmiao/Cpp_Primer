#ifndef EXERCISE_7_23_H
#define EXERCISE_7_23_H

#include <iostream>
#include <string>

struct Screen
{
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { };
        char get() const { return contents[cursor]; };
        inline char get(pos, pos) const;
    private:
        pos height = 0;
        pos width = 0;
        pos cursor = 0;
        std::string contents;
};

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

#endif
