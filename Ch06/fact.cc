#include <iostream>

#include "Chapter6.h"

int fact(int i)
{
    return i > 1 ? i*fact(i-1) : 1;
}
