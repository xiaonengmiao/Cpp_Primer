#include <iostream>

using namespace std;

size_t generate()
{
    static size_t i = 0;
    return i++;
}

int main()
{
    for (size_t i=0; i!=10; ++i)
        cout << generate() << endl;
    return 0;
}
