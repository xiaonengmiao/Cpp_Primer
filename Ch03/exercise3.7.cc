// try to change all the characters in a string to X
// but instead of using a reference we use just char
// which is a copy of string 'line', thus won't mutate 
// 'str'

#include <iostream>
// using declarations for names from the standard library
using namespace std;

int main()
{
    string line("Hello World!!!");
    // string line is "Hello World"
    for (char c : line) {
        c = 'X';
    }
    cout << line << endl;
    return 0;
}
