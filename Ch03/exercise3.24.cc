// 

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;

int main()
{
    vector<int> number;
    for (int num; cin >> num; number.push_back(num));

    if (number.size() < 2) {
      cout << "please enter at least two integers." << endl;
      return -1;
    }

    for (auto it=number.begin(); it!=number.end()-1; ++it) {
        cout << *it + *(it+1) << " ";
    }
    cout << endl;

    for (auto lfit=number.begin(),riit=number.end()-1; lfit <= riit; ++lfit,--riit) 
    {
      cout << *lfit + *riit << " ";
    }
    cout << endl;

    return 0;
}
