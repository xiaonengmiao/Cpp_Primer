// program verifies whether assignments from the previous exercise.

#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " 
        << g << std::endl;
    a = 42; 
    b = 42;
    c = 42; 
    d = 42;
    e = 42; 
    f = 42;
   
    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " "
        << g << std::endl;




    return 0;
}
