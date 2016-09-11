#include <iostream>

// using declarations for names from the standard library
using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
    string line;
    // read input a line at a time until end-of-file
    while (getline(cin, line) && line.size() > 0)
        if (!line.empty())
            cout << line << endl;
    return 0;
}
