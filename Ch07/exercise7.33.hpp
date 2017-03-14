#ifndef EXERCISE_7_32_H
#define EXERCISE_7_32_H

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr
{
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        inline void clear(ScreenIndex);
    private:
        std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

class Screen
{
    friend void Window_mgr::clear(ScreenIndex);
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { };
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { };
        char get() const { return contents[cursor]; };
        inline char get(pos, pos) const;
        inline Screen &move(pos, pos);
        inline Screen &set(char);
        inline Screen &set(pos, pos, char);

        const Screen& display(std::ostream &os) const { do_display(os); return *this; };
        Screen& display(std::ostream &os) { do_display(os); return *this; };
    private:
        void do_display(std::ostream& os) const { os << contents; };
    private:
        pos height = 0;
        pos width = 0;
        pos cursor = 0;
        std::string contents;
};

inline char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
    contents[r*width+c] = ch;
    return *this;
}

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

#endif
