#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::runtime_error;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num2 == 0) throw runtime_error("0 at the denominator");
    cout << num1 / num2 << endl;
}
