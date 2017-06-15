#include <iostream>
#include <string>
#include <vector>
using namespace std;

//
// @brief Exercise 6.54
// @note  define the function type fp
//
inline int f(const int, const int);
typedef decltype(f) fp;//fp is just a function type not a function pointer

inline int numAdd(const int s1, const int s2) { return s1 + s2; }
inline int numSub(const int s1, const int s2) { return s1 - s2; }
inline int numMul(const int s1, const int s2) { return s1 * s2; }
inline int numDiv(const int s1, const int s2) { return s1 / s2; }

vector<fp*> vec{ numAdd, numSub, numMul, numDiv};

int main()
{
  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    cout << (*it)(2,2) << endl;
  }
}
