#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    for (unsigned grade; cin >> grade;) {
        // version of conditional operators
        auto finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
        cout << finalgrade << endl;
        // version of if statement
        if (grade > 90) cout << "high pass";
        else if (grade < 60) cout << "fail";
        else if (grade < 75) cout << "low pass";
        else cout << "pass";
        cout << endl;
    }

    return 0;
}
