#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    cout << "please type four number!" << endl;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d<c && c<b && b<a) {
        cout << "ensured!!" << endl;
    }
    else {
        cout << "not ensured!!" << endl;
    }

    return 0;
}
