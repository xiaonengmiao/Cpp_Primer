// change all the characters in a string to X

#include <iostream>
// using declarations for names from the standard library
using namespace std;

int main()
{
    string line("Hello World!!!");
    // string line is "Hello World"
    for (auto &c : line) {
        c = 'X';
    }
    cout << line << endl;
    return 0;
}
