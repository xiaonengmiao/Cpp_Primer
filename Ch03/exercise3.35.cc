#include <iostream>

using std::endl;
using std::cout;

int main()
{
    const int size = 10;
    int arr[10];
    for (auto it=arr; it!=arr+size; ++it) {
        *it = 0;
    }

    for (auto it=arr; it!=arr+size; ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}
