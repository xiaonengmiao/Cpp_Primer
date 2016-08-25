// indicate which of the following is legal.

#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << "/* " "*/" " */";
    std::cout << "/*" "*/" "/*" "/*" "*/" << std::endl;

    return 0;
}
