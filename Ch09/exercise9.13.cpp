#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> lst{1, 2, 3};
    vector<double> vec1(lst.begin(), lst.end());
    for (auto c : vec1) cout << c << " ";
    cout << endl;
    vector<int> numbers{1, 2, 3, 4};
    vector<double> vec2(numbers.begin(), numbers.end());
    for (auto c : vec2) cout << c << " ";
    cout << endl;

    return 0;
}
