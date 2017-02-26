##Exercise 6.1

> What is the difference between a parameter and an argument?

**Parameters**: Variables declared inside a function.

**Arguments**: Values supplied in a function call to initialize **Parameters**.

##Exercise 6.2

> Indicate which of the following functions are in error and why. Suggest how you might correct the problem.

```cpp
(a) string f() {
         string s;
         // ...
         return s;
    }
(b) void f2(int i) { /*...*/ }
(c) int calc(int v1, int v2) { /*...*/ }
(d) double square(double x) { return x * x };
```

##Exercise 6.3

> Write and test your own version of fact.

[ex6.3-codelink](exercise6.3.cc)

##Exercise 6.4

> Write a function that interacts with the user, ask for a number and generating the factorial of that number. Call this
> function from main.

This code is the same as the precious one [ex6.4-codelink](exercise6.3.cc).

##Exercise 6.5

> Write a function to return the absolute value of its argument.

[ex6.5-codelink](exercise6.5.cc)

##Exercise 6.6

> Explain the differences between a parameter, a local variable, and a local *static* variable. Give an example of a
> function in which each might be useful.



##Exercise 6.7

> What does overflow mean? Show three expressions that will overflow.

```cpp
short value = 32767; ++value; // -32768
unsigned value = 0; --value; // 4294967295
unsigned short value = 65535; ++value; // 0
```

##Exercise 6.8

##Exercise 6.9

##Exercise 6.10

> Using pointers, write a function to swap the values of two *ints*. Test the function by calling it and printing the
> swapped values.

##Exercise 6.11

>

##Exercise 6.12

>

##Exercise 6.43

##Exercise 6.54

> Write a decaration for a function that takes two *int* parameters and returns an *int*, and declare a *vector* whose elements have this function pointer type.

##Exercise 6.55

