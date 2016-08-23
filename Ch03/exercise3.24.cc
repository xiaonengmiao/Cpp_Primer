#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;

int main()
{
    vector<int> number;
    int num;
    while (cin >> num) {
        number.push_back(num);
    }

    for (auto it=number.begin(); it!=number.end()-1; ++it) {
        cout << *it + *(it+1) << " ";
    }
    cout << endl;

    return 0;
}
