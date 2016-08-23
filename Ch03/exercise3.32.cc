#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using std::vector; using std::string; using std::cin; using std::cout;
using std::endl;

int main()
{
    // array
    int arr[10];
    // define an array of ten ints
    for (auto i = 0; i != 10; ++i) {
        arr[i] = i;
    }

    for (auto i : arr) {
        cout << i << " ";
    }

    cout << endl;

    // vector
    vector<int> v(10);
    for (auto i = 0; i != 10; ++i) {
        v[i] = i;
    }

    vector<int> v2(v);

    for (auto i : v2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
