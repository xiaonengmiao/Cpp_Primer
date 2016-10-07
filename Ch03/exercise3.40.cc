#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace::std;

  // C-Style character string
  const char cs1[] = "A string example";
  const char cs2[] = "A different string";

int main()
{
  const size_t new_size = strlen(cs1) + strlen(" ") + strlen(cs2) + 1;
  char cs3[new_size];

  strcpy(cs3, cs1);
  strcat(cs3, " ");
  strcat(cs3, cs2);

  cout << cs3 << endl;

  return 0;
}
