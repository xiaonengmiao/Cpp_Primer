#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

int main()
{
    // ex 11.9
    std::map<std::string, std::list<std::size_t>> m;

    // ex 11.10
    // can be declared.
    std::map<std::vector<int>::iterator, int> mv;
    std::map<std::list<int>::iterator, int> ml;


    std::vector<int> vi;
    mv.insert(std::pair<std::vector<int>::iterator, int>(vi.begin(), 0));

    // but when using this one the compiler complained that
    // error: no match for 'operator<' in '__x < __y'
    std::list<int> li;
    ml.insert(std::pair<std::list<int>::iterator, int>(li.begin(), 0));

    return 0;
}
