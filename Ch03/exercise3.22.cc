// change the elements to all uppercase and print it

#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace::std;

int main ()
{
    vector<string> text;
    string line;
    while (getline(cin, line)) {
        text.push_back(line);
    }

    // iterate thought text
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto &c : *it) {
            if (isalpha(c)) c = toupper(c);
        }
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
