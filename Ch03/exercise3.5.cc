#include <iostream>
// using declarations for names from the standard library
using std::cin;
using std::cout; using std::endl;
using std::string;
int main()
{
    string word;
    // read input a word at a time until end-of-file
    while (cin >> word && word.size() > 0)
        if (!word.empty())
            cout << word + " " << endl;
    return 0;
}
