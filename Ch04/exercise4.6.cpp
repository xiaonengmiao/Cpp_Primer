#include <iostream>

using std::cout; using std::endl;
using std::cin;
int main()
{
    int n = 0;
    while (cin >> n) {
        if (n%2 == 0) {
            cout << n << " is a even number.";
        }
        else {
            cout << n << " is a odd number.";
        }
    }
    cout << endl;

    return 0;
}
