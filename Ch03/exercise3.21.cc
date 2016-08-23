#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s(10,42);
    // s is a vector string
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it <<endl;
    }
    cout << s.size() << endl;
}
