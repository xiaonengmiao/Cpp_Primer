##Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

`int` is at least 16 bits, `long` at least 32 bits, while `long long` at least 64 bits.

A `signed` type can represent negative or positive number (including zero), while an `unsigned` type can only represent values greater than or equal to zero.

`float` is represented in one word (32 bits), `double` in two words (64 bits).

##Exercise 2.2

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

use `double` or `float`.

since rate most like 3.2%, principal like 1000.00, and parment like 3500.00.

##Exercise 2.3

> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 - i << std::endl;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
stdLLcout << u - i << std::endl;
```

Output:
```
32
4294967264
32
-32
0
0
```

##Exercise 2.4

> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

[ex2.4-codelink](exercise2.4.cc)

##Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2

(a) character literal, wide character literal, string literal, string wide character literal.

(b) decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal.

(c) double, float, long double.

(d) decimal, unsigned decimal, double, double.

##Exercise 2.6

> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

the first two are decimals.

the third one is wrong(since octal cannot contain 9), while the last one is octal.

##Exercise 2.7

> What values do these literals represent? What types does each have?
- (a) "Who goes with F\145rgus?\012"
- (b) 3.14e1L
- (c) 1024f
- (d) 3.14L

##Exercise 2.8

> Using escape sequence, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

##Exercise 2.9

> Explain the following definitions. For those that are illegal, explain what's wrong and how to correct it.
- (a) std::cin >> int input_value;
- (b) int i = { 3.14 };
- (c) double salary = wage = 9999.99;
- (d) int i = 3.14

##Exercise 2.10

> What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;

int main()
{
  int local_int;
  std::string local_str;
}
```
##Exercise 2.11

> Explain whether each of the following is a declaration or a definition:
- (a) extern int ix = 1024;
- (b) int iy;
- (c) extern int iz;

##Exercise 2.12

> Which, if any, of the following names are invalid?
- (a) int double = 3.14;
- (b) int _;
- (c) int catch-22;
- (d) int 1_or_2 = 1;
- (e) double Double = 3.14;

##Exercise 2.13

> What is the value of j in the following program? 
```cpp
int i = 42;
int main()
{
  int i = 100;
  int j = i;
}
```

##Exercise 2.14

> Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```
##Exercise 2.15

> Which of the following definitions, if any, are invalid? Why?
- (a) int ival = 1.01;
- (b) int &rval1 = 1.01;
- (c) int &rval2 = ival;
- (d) int &rval3;

##Exercise 2.16

> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```
- (a) r2 = 3.14159;
- (b) r2 = r1;
- (c) i = r2;
- (d) r1 = d;

##Exercise 2.17

> What does the following code print?
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

##Exercise 2.18

> Write code to change the value of a pointer. Write code to change the value to which the pointer points.

##Exercise 2.19

> Explain the key differences between pointers and references.

##Exercise 2.20

> What does the following program do?
```cpp
int i = 42;
int *p1 = &i; *p1 = *p1 * *p1;
```

##Exercise 2.21

> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
```cpp
int i = 0;
```
- (a) double* dp = &i;
- (b) int *ip = i;
- (c) int *p = &i;

##Exercise 2.22

> Assuming p is a pointer to int, explain the following code:
```cpp
if (p) // ...
if (*p) // ...
```

##Exercise 2.23

> Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

##Exercise 2.24

> Why is the initialization of p legal but that of Ip illegal?
```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

##Exercise 2.25

> Determine the types and values of each of the following variables.
- (a) int* ip, i, &r = i;
- (b) int i, *ip = 0;
- (c) int* ip, ip2;

##Exercise 2.26

> Which of the following are legal? For those that are illegal, explain why.
```cpp
const int buf;      // illegal, but is uninitialized const.
int cnt = 0;        // legal.
const int sz = cnt; // legal.
++cnt; ++sz;        // illegal, attempt to write to const object(sz).
```

##Exercise 2.27

> Which of the following initializations are legal? Explain why.
```cpp
int i = -1, &r = 0;         // illegal, r must refer to an object.
int *const p2 = &i2;        // legal.
const int i = -1, &r = 0;   // legal.
const int *const p3 = &i2;  // legal.
const int *p1 = &i2;        // legal.
const int &const r2;        // illegal, r2 is a reference that cannot be const.
const int i2 = i, &r = i;   // legal.
```

##Exercise 2.28

> Explain the following definitions. Identify any that are illegal.
```cpp
int i, *const cp;       // illegal, cp must initialize.
int *p1, *const p2;     // illegal, p2 must initialize.
const int ic, &r = ic;  // illegal, ic must initialize.
const int *const p3;    // illegal, p3 must initialize.
const int *p;           // legal. a pointer to const int.
```

##Exercise 2.29

> Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

##Exercise 2.30

> For each of the following declarations indicate whether the object being declared has top-level or low-level const.
```cpp
const int v2 = 0; int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```

##Exercise 2.31

> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

##Exercise 2.32

> Is the following code legal or not? If not, how might you make it legal?
```cpp
int null = 0, *p = null;
```

##Exercise 2.33

> Using the variable definitions from this section, determine what happens in each of these assignments:
```cpp
a=42; // set 42 to int a.
b=42; // set 42 to int b.
c=42; // set 42 to int c.
d=42; // ERROR, d is an int *. correct: *d = 42;
e=42; // ERROR, e is an const int *. correct: e = &c;
g=42; // ERROR, g is a const int& that is bound to ci.
```

##Exercise 2.34

> Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know ￼￼what led you to the wrong conclusion.

##Exercise 2.35

> Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.
```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i; const auto j2 = i, &k2 = i;
```

##Exercise 2.36

> In the following code, determine the type of each variable and the value each variable has when the code finishes:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

##Exercise 2.37

> Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

##Exercise 2.38

> Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

##Exercise 2.39

> Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.
```cpp
struct Foo { /* empty  */ } // Note: no semicolon
int main()
{
    return 0;
}
```

##Exercise 2.40

> Write your own version of the Sales_data class.

##Exercise 2.41

> Use your Sales_data class to rewrite the exercises in § 1.5.1(p. 22), § 1.5.2(p. 24), and § 1.6(p. 25). For now, you should define your Sales_data class in the same file as your main function.

##Exercise 2.42

> Write your own version of the Sales_data.h header and use it to rewrite the exercise from § 2.6.2(p. 76)
