#ifndef EXERCISE_7_31_H
#define EXERCISE_7_31_H

struct Y;

struct X
{
    Y* x = nullptr;
};

struct Y
{
    X y;
};

#endif
