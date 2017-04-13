#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  string conca = argv[1];
  conca = conca + argv[2];
  cout << conca << endl;

  return 0;
}
