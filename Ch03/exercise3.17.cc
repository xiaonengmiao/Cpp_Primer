// read a sequence of words from cin and store in a vector

#include <iostream>
#include <vector>
#include <string>

// using declarations for names from the standard library
using namespace std;

int main()
{
    vector<string> s;
    string c;
    int j = 0;
    while (cin >> c && !isspace(c[0])) {
        s.push_back(c);
    }
    for (auto &d : s) {
        for (auto &e : d) {
            e = toupper(e);
        }
    }
    for (auto f : s) {
        ++j;
        if (j%8 == 0) {
            cout << endl;
        }
        cout << f << " ";
    }
    cout << endl;
    return 0;
}
