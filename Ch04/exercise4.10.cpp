#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    int n = 0;
    while (cin >> n && n!=42) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
