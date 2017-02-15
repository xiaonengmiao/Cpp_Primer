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

##Exercise4.5

> Determine the result of the following expressions.

```cpp
(a) -30 * 3 + 21 / 5 // -90 + 4 = -86
(b) -30 + 3 * 21 / 5 // -30 + 63/5 = -18
(c) 30 / 3 * 21 % 5 // 10 * 21 % 5 = 210 % 5 = 0
(d) -30 / 3 * 21 % 4 // -10 * 21 % 4 = -210 % 4 = -2
```

##Exercise4.6

> Write an expression to determine whether an `int` value is even or odd.

```cpp
(i%2 == 0) ? 0 : 1;
```

##Exercise4.7

> What does overflow mean? Show three expressions that will overflow.

```cpp
short value = 32767; ++value; // -32768
unsigned value = 0; --value; // 4294967295
unsigned short value = 65535; ++value; // 0
```

