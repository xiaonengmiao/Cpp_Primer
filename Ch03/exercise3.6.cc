#include <iostream>
// using declarations for names from the standard library
using namespace std;

int main()
{
    string line("Hello World!!!");
    // string line is "Hello World"
    for (char &c : line) {
        c = 'X';
    }
    cout << line << endl;
    return 0;
}
