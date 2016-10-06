// compare two arrays for equality

#include <iostream>
#include <vector>
#include <iterator>

using namespace::std;

bool compare(int *ae1, int *ab1, int *ae2, int *ab2)
{
    if ((ab1-ae1) != (ab2-ae2)) {
        return false;
    }
    else {
        for (int *i=ab1, *j=ab2; i!=ae1 && j!=ae2; ++i, ++j) {
            if (*i!=*j) {
                return false;
            }
        }
    }

    return true;
}

int main() 
{
    int arr1[3] = {1,2,3};
    int arr2[3] = {0,2,4};
    if (compare(end(arr1), begin(arr1), end(arr2), begin(arr2))) {
        cout << "The tow arrays are equal" << endl;
    } 
    else {
        cout << "They are equal;" << endl;
    }

    vector<int> vec1{3,1};
    vector<int> vec2{3,1};

    if (vec1 == vec2) {
        cout << "The tow vectors are equal" << endl;
    }
    else {
        cout << "They are not equal" << endl;
    }

    return 0;
}
