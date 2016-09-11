#include <iostream>

// using declarations for names from the standard library
using std::cin;
using std::cout; using std::endl;
using std::string;

int main()
{
    string word1, word2;
    // read input a word at a time until end-of-file
    while (cin >> word1 >> word2 && word1.size() > 0){
        if (word1 == word2){
            cout << word1 + " and " + word2 + " are equal" << endl;
        }else if (word1 > word2){
            cout << word1 + " is larger than " + word2 << endl;
        }else { 
            cout << word1 + " is smaller than " + word2 << endl;
        }
    }
    return 0;
}
