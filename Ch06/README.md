## Exercise 6.1

> What is the difference between a parameter and an argument?

**Parameters**: Variables declared inside a function.

**Arguments**: Values supplied in a function call to initialize **Parameters**.

## Exercise 6.2

> Indicate which of the following functions are in error and why. Suggest how you might correct the problem.

```cpp
(a) int f() {
        string s;
        // ...
        return s;
    }
(b) f2(int i) { /*...*/ }
(c) int calc(int v1, int v1) { /*...*/ }
(d) double square(double x) return x * x;
```

**Fixed**

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

## Exercise 6.3

> Write and test your own version of fact.

[ex6.3-codelink](exercise6.03.cpp)

## Exercise 6.4

> Write a function that interacts with the user, ask for a number and generating the factorial of that number. Call this function from main.

This code is the same as the precious one [ex6.4-codelink](exercise6.3.cpp).

## Exercise 6.5

> Write a function to return the absolute value of its argument.

[ex6.5-codelink](exercise6.5.cpp)

## Exercise 6.6

> Explain the differences between a parameter, a local variable, and a local *static* variable. Give an example of a
> function in which each might be useful.

`local variable`: Variables defined inside a `block`;

`parameter`: `Local variables` declared inside the function parameter list

`local static variable`: `local static variable(object)` is initialized before the first time execution passes through the object’s definition. 
`Local statics` are not destroyed when a function ends; they are `destroyed when the program terminates`.

```cpp
// example
size_t count_add(int n)       // n is a parameter.
{
    static size_t ctr = 0;    // ctr is a static variable.
    ctr += n;
    return ctr;
}

int main()
{
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
      cout << count_add(i) << endl;

    return 0;
}
```

## Exercise 6.7

> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called
> again.

[ex6.7-codelink](exercise6.07.cpp)

## Exercise 6.8

> Write a header file named `Chapter6.h` that contains declarations for the functions you wrote for the exercises in §
> 6.1 (p.205).

[Chapter6.h-codelink](Chapter6.h)

## Exercise 6.9

> Write your own version of the `factor.cpp` and `factMain.cpp` files. These files should include your `Chapter6.h` from
> the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.

[fact.cpp-codelink](fact.cpp)
[factMain.cpp-codelink](factMain.cpp)

## Exercise 6.10

> Using pointers, write a function to swap the values of two *ints*. Test the function by calling it and printing the
> swapped values.

```cpp
void swap(int *i, int *j)
{
    int k = *i;
    *i = *j;
    *j = k;

    return 0;
}
```

## Exercise 6.11

> Write and test your own version of `reset` that takes a reference.

[ex6.11-codelink](exercise6.11.cpp)

## Exercise 6.12

> Rewrite the program from the exercise 6.10 in § 6.2.1 (p.210) to use references instead of pointers to swap the values
> of two `ints`. Which version do you think would be easier to use and why?

[ex6.12-codelink](exercise6.12.cpp)

## Exercise 6.13

> Assuming `T` is the name of a type, explain the difference between a function declared as `void f(T)` and `void
> f(T&)`.

`void f(T)` pass the argument by value. *nothing* the function does to the parameter *can affect the argument*. `void f(T&)` pass a reference, will be *bound to* whatever T object we pass.

## Exercise 6.14

> Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a
> reference.

a parameter should be a reference:
```cpp
void reset(int &i)
{
    i = 0;
}
```
a parameter should not be reference:
```cpp
void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator iter = begin; iter != end; ++iter)
        std::cout << *iter << std::endl;
}
```

## Exercise 6.15

> Explain the rationale for the type of each of `find_char`'s parameters. In particular, why is a reference to `const`
> but `occurs` is a plain reference? Why are these parameters references, but the `char` parameter `c` is not? What
> would happen if we made `s` a plain reference? What if we made `occurs` a reference to `const`.

cause the `s` should not be changed by this function. but `occurs`'s result must be calculated by the function.

casue `c` maybe a `temp` variable. such as `find_char(s, 'a', occurs)`.

`s` could be changed in the function, and `occurs` would not be changed. so occurs = 0; is an error.

## Exercise 6.16

> The following function, although legal, is less useful than it might be. Identify and correct the limitation on this
> function:
```cpp
bool is_empty(string& s) { return s.empty(); }
```

Fixed:

```cpp
bool is_empty(const string& s) { return s.empty(); }
```
Since this function does not change the argument.

## Exercise 6.17

> Write a function to determine whether a `string` contains any capital letters. Write a function to change a `string` to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?

Not the same. For the first one "const" was used, since no change need to do for the argument. For the second function, "const" can't be used, because the content of the agument should be changed.

[ex6.17-codelink](exercise6.17.cpp)

## Exercise 6.18

> Write declarations for each of the following functions. When you write these decarations, use the name of the function to indicate what the function does.

- (a) A function named `compare` that returns a `bool` and has two parameters that are references to a class named `matrix`.
- (b) A function named `change_val` that returns a `vector<int>` iterator and takes two parameters: One is an `int` and the other is an iterator for a `vector<int>`.

- (a)
```cpp
bool compare(matrix &m1, matrix &m2);
```
- (b) 
```cpp
vector<int>::iterator change_val(int i, vector<int>::iterator);
```

## Exercise 6.19

> Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.

```cpp
double calc(double);
int count(count string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
(a) calc(23.4, 55.1); (b) count("abcda", 'a');
(c) calc(66);         (d) sum(vec.begin(), vec.end(), 3.8);
```

(a) illegal, only one parameter (b) legal (c) legal (d) legal

## Exercise 6.20

> When should reference parameters be references to `const`? What happens if we make a parameter a plain reference when it could be a reference to `const`?

If we can use `const`, just use it. If we make a parameter a plain reference when it could be a reference to `const`, the reference value maybe changed.

## Exercise 6.21

> Write a function that takes an `int` and a pointer points. What type should you use for the pointer?

[ex6.21-codelink](exercise6.21.cpp)

## Exercise 6.22

> Write a function to swap two `int` pointers.

[ex6.22-codelink](exercise6.22.cpp)

## Exercise 6.23

> Write your own versions of each of the `print` functions presented in this section. Call each of these functions to print `i` and `j` defined as follows:

```cpp
int i = 0, j[2] = {0, 1};
```

[ex6.23-codelink](exercise6.23.cpp)

## Exercise 6.24

> Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.

```cpp
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}
```
> Arrays have two special properties that affect how we define and use functions that operate on arrays: We cannot copy an array, and when we use an array it is (usually) `converted to a pointer`.

So we cannot pass an array by value, and when we pass an array to a function, we are actually passing a pointer to the array's first element.

In this question, `const int ia[10]` is actually same as `const int*`, and the size of the array is `irrelevant`. we can pass `const int ia[3]` or `const int ia[255]`, there are no differences. If we want to pass an array which size is ten, we should use reference like that:

```cpp
void print10(const int (&ia)[10]) { /*...*/ }
```

## Exercise 6.25

> Write a `main` function that takes two arguments. Concatenate the supplied arguments and print the resulting `string`.

[ex6.25-codelink](exercise6.25.cpp)

## Exercise 6.26

> Write a program that accepts the options presented in this section. Print the values of the arguments passed to `main`.

[ex6.26-codelink](exercise6.26.cpp)

## Exercise 6.27

> Write a function that takes an `initialized_list<int>` and produces the sum of the elements in the list.

[ex6.27-codelink](exercise6.27.cpp)

## Exercise 6.28

> In the second version of `error_msg` that has an `ErrCode` parameter, what is the type of `elem` in the `for` loop?

`const string&`.

## Exercise 6.29

> When you use an `initializer_list` in a range `for` would you ever use a reference as the loop control variable? If so, why? If not, why not?

Depends on the type of elements of `initializer_list`. When the type is [PODType](http://en.cppreference.com/w/cpp/concept/PODType), reference is unnecessary. Because `POD` is **cheap to copy**(such as `int`). Otherwise, Using reference(`const`) is the better choice.

## Exercise 6.30

> Compile the version of `str_subrange` as presented on page 223 to see what your compiler does with the indicated errors.

exercise6.30.cpp:13:7: error: non-void function 'str_subrange' should return a value [-Wreturn-type]
      return;
      ^
1 error generated.

[ex6.30-codelink](exercise6.30.cpp) note that this code is wrong!!!

## Exercise 6.31

> When is it valid to return a reference? A reference to `const`?

when you can find the preexited object that the reference refered.

## Exercise 6.32

> Indicate whether the following function is legal. If so, explain what it does; if not, correct any errors and then explain it.

```cpp
int &get(int *arry, int index) { return arry[index]; }
int main() {
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia, i) = i;
}
```

legal, it gave the values (0 ~ 9) to array `ia`.

## Exercise 6.33

> Write a recursive function to print the contents of a `vector`.

[ex6.33-codelink](exercise6.33.cpp)

## Exercise 6.34

> What would happen if the stopping condition in `factorial` were

```cpp
if (val != 0)
```

When the recursion termination condition becomes `var != 0`, two situations can happen :

- case 1 : If the argument is positive, recursion stops at 0.(Note : There is one extra multiplication step though as the combined expression for factorial(5) reads 5 * 4 * 3 * 2 * 1 * 1. In terms of programming languages learning, such subtle difference probably looks quite trivial. In algorithms analysis and proof, however, this extra step may be super important.)
- case 2 : if the argument is negative, recursion would never stop. As a result, a stack overflow would occur.

## Exercise 6.35

> In the call to `factorial`, why did we pass `val - 1` rather than `val--`?

the recursive function will always use `val` as the parameter. a *recursion* loop would happen.

## Exercise 6.36

> Write the declaration for a function that returns a reference to an array of ten `strings`, without using either a trailing return, `decltype`, or a type alias.

```cpp
string (&func(string (&arrStr)[10]))[10]
```

## Exercise 6.37

> Write three addtional declarations for the function in the previous exercise. One should use a type alias, one should use a trailing return, and the third should use `decltype`. Which form do you prefer and why?

```cpp
using ArrT = string[10];
ArrT &func1(ArrT &arr);

auto func2(ArrT &arr) -> string(&)[10]

string arrS[10]
decltype(arrS) &func3(ArrT &arr);
```

I pefer the first one. because it is more simpler to me.

## Exercise 6.38

> Revise the `arrPtr` function on to return a reference to the array.

```cpp
decltype(arrStr)& arrPtr(int i)
{
          return (i % 2) ? odd : even;
}
```

## Exercise 6.39

> Explain the effect of the second declaration in each of the following sets of declarations. Indicate which, if any, are illegal.

```cpp
(a) int calc(int, int);
    int calc(const int, const int); // illegal
(b) int get();
    double get(); // illegal
(c) int *reset(int *);
    double *reset(double *); legal
```

## Exercise 6.40

> Which, if either, of the following declarations are errors? Why?

```cpp
(a) int ff(int a, int b = 0, int c = 0); // no error
(b) char *init(int ht = 24, int wd, char bckgrnd); // missing default on parameter 'wd','bckgrnd'
```

## Exercise 6.41

> Which, if any, of the following calls are illegal? Why? Which, if any, are legal but unlikely to match the programmer's intent? Why?
```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
(a) init(); \\ illegal (b) init(24,10); \\ legal (c) init(14,'*'); \\ illegal
```

## Exercise 6.42

> Give the second parameter of make_plural (§6.3.2,p.224) a default argument of `s`. Test your program by printing singular and plural versions of the words success and failure.

[ex6.42-codelink](exercise6.42.cpp)

## Exercise 6.43

> Which one of the following declarations and definitions would you put in a header? In a source file? Explain why.
```cpp
(a) inline bool eq(const BigInt&, const BigInt&) {...} // header file cause its inline function
(b) void putValues(int *arr, int size); // header cause its declaration
```

## Exercise 6.44

> Rewrite the `isShorter` function from §6.2.2(p.211) to be `inline`.

```cpp
inline bool isShorter(const string &s1, const string &s2)
{
  return s1.size() > s2.size();
}
```

## Exercise 6.45

> Review the programs you've written for the earlier exercises and decide whether they should be defined as `inline`. If so, do so. If not, explain why they should not be `inline`.

For example, the function arrPtr in Exercise 6.38 and make_plural in Exercise 6.42 should be defined as inline. But the function func in Exercise 6.4 shouldn't. Cause it just being call once and too many codes in the function.

## Exercise 6.46

> Would it be possible to define `isShorter` as a `constexpr`? If so, do so. If not, explain why not.

No.

Because `std::string::size()` is not a `constexpr` function and `s1.size() == s2.size()` is not a constant expression.

## Exercise 6.47

> Revise the program you wrote in the exercises in §6.3.2(p.228) that used recursion to print the contents of a vector to conditionally print information about its execution. For example, you might print the size of the vector on each call. Compile and run the program with debugging turned on and again with it turned off.

[ex6.470-codelink](exercise6.47.cpp)

## Exercise 6.48

> Explain what this loop does and whether it is a good use of assert:

```cpp
string s;
while (cin >> s && s != sought) { } // empty body
assert (cin)
```
This loop let user input a word all the way until the word is sought.

It isn't a good use of assert. because if user begin to input a word, the `cin` would be always have content. so the `assert` would be always true. It is meaningless. using `assert(s == sought)` is more better.

## Exercise 6.49

> What is a candidate function? What is a visible function?

candidate function:

> Set of functions that are considered when resolving a function call. (all the functions with the name used in the call for which a declaration is in scope at the time of the call.)

viable function:

> Subset of the candidate functions that could match a given call. It have the same number of parameters as arguments to the call, and each argument type can be converted to the corresponding parameter type.

## Exercise 6.50

> Given the declarations for `f` from page 242, list the viable functions, if any for each of the following calls. Indicate which function is the best match, or if the call is illegal whether there is no match or why the call is ambiguous.

(a) `f(2.56)` (b) `f(42)` (c) `f(42,0)` (d) `f(2.56,3.14)`

- (a) illegal. 2.56 is `double`, but 42 is `int`.
- (b) match `void f(int)`
- (c) match `void f(int, int)`
- (d) match `void f(double, double = 3.14)`

## Exercise 6.51

> Write all four versions of `f`. Each function should print a distinguishing message. Check your answers for the previous exercise. If your answers were incorrect, study this section until you understand why your answers were wrong.

[ex6.51-codelink](exercise6.51.cpp)

## Exercise 6.52

> Given the following declarations,
```cpp
void manip(int, int);
double dobj;
```
what is the rank(§6.6.1,p.245) of each conversion in the following calls?

(a) manip('a', 'z');  (b) manip(55.4, dobj);

(a) Match through a promotion

(b) Arithmetic type conversion

## Exercise 6.53

> Explain the effect of the second declaration in each one of the following sets of declarations. Indicate which, if any, are illegal.

(a) int calc(int&, int&);
    int calc(const int&, const int&);
(b) int calc(char*, char*);
    int calc(const char*, const char*);
(c) int calc(char*, char*);
    int calc(char* const, char* const);
```cpp
(a) int calc(int&, int&); // calls lookup(int&)
    int calc(const int&, const int&); // calls lookup(const int&)
(b) int calc(char*, char*); // calls lookup(char*)
    int calc(const char*, const char*); // calls lookup(const char *)
(c) int calc(char*, char*); // calls lookup(char*)
    int calc(char* const, char* const); // calls lookup(char*)
    illegal.
```

## Exercise 6.54

> Write a decaration for a function that takes two *int* parameters and returns an *int*, and declare a *vector* whose elements have this function pointer type.

```cpp
int func(int a, int b);

using pFunc1 = decltype(func) *;
typedef decltype(func) *pFunc2;
using pFunc3 = int (*)(int a, int b);
using pFunc4 = int(int a, int b);
typedef int(*pFunc5)(int a, int b);
using pFunc6 = decltype(func);

std::vector<pFunc1> vec1;
std::vector<pFunc2> vec2;
std::vector<pFunc3> vec3;
std::vector<pFunc4*> vec4;
std::vector<pFunc5> vec5;
std::vector<pFunc6*> vec6;
```

## Exercise 6.55

> Write four functions that add, subtract, multiply, and divide two `int` functions. Store pointers to these functions in your `vector` from the previous exercise.
```cpp
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }
```

## Exercise 6.56

> Call each element in the `vector` and print their result.

[ex6.56-codelink](exercise6.56.cpp)
