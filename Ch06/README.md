##Exercise6.1

> What is the difference between a parameter and an argument?

**Parameters**: Variables declared inside a function.

**Arguments**: Values supplied in a function call to initialize **Parameters**.

##Exercise6.2

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

##Exercise6.3

> Write and test your own version of fact.

[ex6.3-codelink](exercise6.3.cc)

##Exercise6.4

> Write a function that interacts with the user, ask for a number and generating the factorial of that number. Call this
> function from main. 

This code is the same as the precious one [ex6.4-codelink](exercise6.3.cc).

##Exercise6.5

> Write a function to return the absolute value of its argument.

[ex6.5-codelink](exercise6.5.cc)

##Exercise6.6

> Explain the differences between a parameter, a local variable, and a local *static* variable. Give an example of a
> function in which each might be useful.


##Exercise4.7

> What does overflow mean? Show three expressions that will overflow.

```cpp
short value = 32767; ++value; // -32768
unsigned value = 0; --value; // 4294967295
unsigned short value = 65535; ++value; // 0
```

