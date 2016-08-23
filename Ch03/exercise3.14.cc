#include <iostream>
#include <vector>
// using declarations for names from the standard library
using namespace std;

int main()
{
    vector<int> s;
    int number;
    int i = 0;
    // s is empty vector
    while (cin >> number && i < 3) {
        ++i;
        s.push_back(number);
    }
    for (auto c : s) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
