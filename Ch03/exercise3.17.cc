#include <iostream>
#include <vector>
#include "cctype"
// using declarations for names from the standard library
using namespace std;

int main()
{
    vector<string> s;
    string c;
    //int i = 0;
    int j = 0;
    // s is empty vector
    while (cin >> c && !isspace(c[0])) {
        s.push_back(c);
    //    ++i;
    }
    for (auto &d : s) {
        for (auto &e : d) {
            e = toupper(e);
        }
    }
    for (auto f : s) {
        ++j;
        if (j/8 == 1) {
            cout << endl;
        }
        cout << f;
    }
    cout << endl;
    return 0;
}
