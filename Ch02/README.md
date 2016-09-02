##Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

##Exercise 2.2

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

##Exercise 2.3

> What output will the following code produce?

##Exercise 2.4

> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

##Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2

##Exercise 2.6

> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

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


