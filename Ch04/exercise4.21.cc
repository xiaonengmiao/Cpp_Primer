#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
int main()
{
    vector<int> v{1, 4, 5};
    for (auto &c : v) {
        c%2 == 0 ? c : c *= 2;
    }
    for (auto c : v) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
