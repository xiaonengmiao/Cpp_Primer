#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;
int main()
{
    string word_duplicated;
    int number_duplicated = 0;
    int cnt = 0;
    for (string str, prestr; cin >> str; prestr = str) {
        if (str == prestr) ++cnt;
        else cnt = 0;
        if (cnt > number_duplicated) {
            number_duplicated = cnt;
            word_duplicated = prestr;
        }
    }
    if (word_duplicated.empty()) cout << "There's no duplicated string." << endl;
    else cout << word_duplicated << " occurs " << number_duplicated+1 << " times." << endl;
    return 0;
}
