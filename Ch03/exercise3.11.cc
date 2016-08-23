#include <iostream>
// using declarations for names from the standard library
using namespace std;

int main()
{
    const string s = "Keep out!";
    // s is a constant string
    for (auto &c : s) {
        cout << c << endl;
    }
    return 0;
}
