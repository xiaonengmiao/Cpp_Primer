// read from cin and store

#include <iostream>
#include <vector>
// using declarations for names from the standard library
using namespace std;

int main()
{
    vector<int> s;
    int number;
    // s is empty vector
    while (cin >> number) {
        s.push_back(number);
    }

    return 0;
}
