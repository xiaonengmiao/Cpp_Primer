#include <iostream>
#include <string>
// using declarations for names from the standard library
using namespace std;

int main()
{
    string line;
    // string line is "Hello World"
    while(getline(cin, line)) {
      cout << endl;
      for (char &c : line) {
        if (!ispunct(c)) {
            cout << c;
	}
      }
    }
    cout << endl;
    // cout << line << endl;
    return 0;
}
