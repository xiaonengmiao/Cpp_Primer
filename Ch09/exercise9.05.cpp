#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator finds(vector<int>::const_iterator first, vector<int>::const_iterator last, int i)
{
    for (; first != last; ++first)
        if (*first == i) return first;
    return last;
}

int main()
{
    vector<int> vec{1,2,3,4,5};
    vector<int>::const_iterator first = vec.begin();
    vector<int>::const_iterator last = vec.end();
    int i;
    std::cin >> i;
    std::cout << *finds(first, last, i) << std::endl;

    return 0;

}
