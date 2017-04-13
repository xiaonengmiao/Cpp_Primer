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

[ex6.3-codelink](exercise6.3.cc)

## Exercise 6.4

> Write a function that interacts with the user, ask for a number and generating the factorial of that number. Call this function from main.

This code is the same as the precious one [ex6.4-codelink](exercise6.3.cc).

## Exercise 6.5

> Write a function to return the absolute value of its argument.

[ex6.5-codelink](exercise6.5.cc)

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

[ex6.7-codelink](exercise6.07.cc)

## Exercise 6.8

> Write a header file named `Chapter6.h` that contains declarations for the functions you wrote for the exercises in §
> 6.1 (p.205).

[Chapter6.h-codelink](Chapter6.h)

## Exercise 6.9

> Write your own version of the `factor.cc` and `factMain.cc` files. These files should include your `Chapter6.h` from
> the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.

[fact.cc-codelink](fact.cc)
[factMain.cc-codelink](factMain.cc)

## Exercise 6.10

> Using pointers, write a function to swap the values of two *ints*. Test the function by calling it and printing the
> swapped values.



## Exercise 6.11

> Write and test your own version of `reset` that takes a reference.

[ex6.11-codelink](exercise6.11.cc)

## Exercise 6.12

> Rewrite the program from the exercise 6.10 in § 6.2.1 (p.210) to use references instead of pointers to swap the values
> of two `ints`. Which version do you think would be easier to use and why?

[ex6.12-codelink](exercise6.12.cc)

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
bool is_empty(string& s) { return s.empty() }
```

## Exercise 6.17

> Write a function to determine whether a `string` contains any capital letters. Write a function to change a `string` to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not?

Not the same. For the first one "const" was used, since no change need to do for the argument. For the second function, "const" can't be used, because the content of the agument should be changed.

## Exercise 6.18

> Write declarations for each of the following functions. When you write these decarations, use the name of the function to indicate what the function does.

- (a) A function named `compare` that returns a `bool` and has two parameters that are references to a class named `matrix`.
- (b) A function named `change_val` that returns a vectors a `vector<int>` iterator and takes two parameters: One is an `int` and the other is an iterator for a `vector<int>`.

- (a) bool compare(matrix &m1, matrix &m2);
- (b) vector<int>::iterator change_val(int i, vector<int>::iterator iter);

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

[ex6.20-codelink](exercise6.20.cc)

## Exercise 6.21

> Write a function that takes an `int` and a pointer points. What type should you use for the pointer?

[ex6.21-codelink](exercise6.21.cc)

## Exercise 6.22

> Write a function to swap two `int` pointers.

[ex6.22-codelink](exercise6.22.cc)

## Exercise 6.23

> Write your own versions of each of the `print` functions presented in this section. Call each of these functions to print `i` and `j` defined as follows:

```cpp
int i = 0, j[2] = {0, 1};
```

[ex6.23-codelink](exercise6.23.cc)

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

[ex6.25-codelink](exercise6.25.cc)

## Exercise 6.26

> Write a program that accepts the options presented in this section. Print the values of the arguments passed to `main`.

[ex6.26-codelink](exercise6.26.cc)

## Exercise 6.27

> Write a function that takes an `initialized_list<int>` and produces the sum of the elements in the list.

[ex6.27-codelink](exercise6.27.cc)

## Exercise 6.28

> In the second version of `error_msg` that has an `ErrCode` parameter, what is the type of `elem` in the `for` loop?

`const string&`.

## Exercise 6.29

> When you use an `initializer_list` in a range `for` would you ever use a reference as the loop control variable? If so, why? If not, why not?

Depends on the type of elements of `initializer_list`. When the type is [PODType](http://en.cppreference.com/w/cpp/concept/PODType), reference is unnecessary. Because `POD` is **cheap to copy**(such as `int`). Otherwise, Using reference(`const`) is the better choice.

## Exercise 6.43

## Exercise 6.54

> Write a decaration for a function that takes two *int* parameters and returns an *int*, and declare a *vector* whose elements have this function pointer type.

## Exercise 6.55

