#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<const char*> il{"king", "queen", "prince"};
    vector<string> vec;
    vec.assign(il.begin(), il.end());
    for (auto c : vec) cout << c << " ";
    cout << endl;

    return 0;
}
