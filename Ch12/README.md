## Exercise 12.01

> How many elements do b1 and b2 have at the end of this code?
```cpp
StrBlob b1;
{
    StrBlob b2 = { "a", "an", "the" };
    b1 = b2;
    b2.push_back("about");
}
```

At the end of this code,
 * `b1` holds 4 elements;
 * `b2` has been destroyed automatically. So it's meaningless to say how many elements in `b2`.

## Exercise 12.02

> Write your own version of the `StrBlob` class including the `const` versions of `front` and `back`.

[ex12.02-codelink](exercise12.02.hpp) | [Test](exercise12.02.cpp)

## Exercise 12.03:

> Does this class need const versions of push_back and pop_back? If so, add them. If not, why aren’t they needed?

You can certainly do this if you want to, but there doesn't seem to be any
logical reason. The compiler doesn't complain because this doesn't modify
data (which is a pointer) but rather the thing data points to, which is
perfectly legal to do with a const pointer. by David Schwartz.

-----

Discussion over this exercise on [Stack Overflow](http://stackoverflow.com/questions/20725190/operating-on-dynamic-memory-is-it-meaningful-to-overload-a-const-memeber-functi)

Discussion over this exercise more on [douban](http://www.douban.com/group/topic/61573279/)(chinese)

## Exercise 12.04:

> In our check function we didn’t check whether i was greater than zero. Why is it okay to omit that check?

Because the type of `i` is `std::vector<std::string>::size_type` which
is an `unsigned`.When any argument less than 0 is passed in, it will convert
to a number greater than 0. In short `std::vector<std::string>::size_type`
will ensure it is a positive number or 0.

## Exercise 12.05:

> We did not make the constructor that takes an initializer_list explicit (7.5.4, p. 296). Discuss the pros and cons of this design choice.

[@Mooophy](https://github.com/Mooophy):

keyword `explicit` prevents automatic conversion from an `initializer_list` to `StrBlob`.
This design choice would easy to use but hard to debug.

[@pezy](https://github.com/pezy):

**Pros**

- The compiler will not use this constructor **in an automatic conversion**.
- We can realize clearly which class we have used.

**Cons**

- We always uses the constructor to construct **a temporary StrBlob object**.
- cannot use the copy form of initialization with an explicit constructor. not easy to use.

## Exercise 12.06:

> Write a function that returns a dynamically allocated `vector` of `ints`. Pass that `vector` to another function that reads the standard input to give values to the elements. Pass the `vector` to another function to print values that were read. Remember to `delete` the `vector` at the appropriate time.

[ex12.06-codelink](exercise12.06.cpp)

## Exercise 12.07: 

> Redo the previous exercise, this time using `shared_ptr`.

[ex12.07-codelink](exercise12.07.cpp)

## Exercise 12.08:

> Explain what if anything is wrong with the following function.
```cpp
bool b() {
    int* p = new int;
    // ...
    return p;
}
```

The p will convert to a bool , which means that the dynamic memory allocated has no chance to be freed. As a result, memory leakage will occur.

## Exercise 12.09:

> Explain what happens in the following code:
```cpp
int *q = new int(42), *r = new int(100);
r = q;
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;
```

- to `q` and `r`:

Memory leakage happens. Because after `r = q` was executed, no pointer points to the int `r` had pointed to. It implies that no chance to free the memory for it.

- to `q2` and `r2`:

It's safe. Because after 'r2 = q2', the reference count belongs to r2 reduce to 0 and the reference count belongs to q2 increase to 2, then the memory allocated by r2 will be released automatically.

## Exercise 12.10:

> Explain whether the following call to the `processing` function defined on page 464 is correct. If not, how would you correct the call?

```cpp
shared_ptr<int> p(new int());
process(shared_ptr<int>(p));
```

[ex12.10-codelink](exercise12.10.cpp)

## Exercise 12.11:

> What would happen if we called `process` as follows?

```cpp
process(shared_ptr<int>(p.get()));
```

[ex12.11-codelink](exercise12.11.cpp)

## Exercise 12.12:

> Using the declarations of `p` and `sp` explain each of the following calls to `process`. If the call is legal, explain what it does. If the call is illegal, explain why:

```cpp
auto p = new int;
auto sp = make_shared<int>();
(a) process(sp);
(b) process(new int());
(c) process(p);
(d) process(shared_ptr<int>(p));
```

[ex12.12-codelink](exercise12.12.cpp)

## Exercise 12.13:

> What happens if we execute the following code?

```cpp
auto sp = make_shared<int>();
auto p = sp.get();
delete p;
```

generate a runtime error: double free

## Exercise 12.14:

> Write your own version of a function that uses a `shared_ptr` to manage a `connection` function.

[ex12.14-codelink](exercise12.14.cpp)

## Exercise 12.15

> Rewrite the first execise to use a lambda (§ 10.3.2, p. 388) in place of the `end_connection` function.

[ex12.15-codelink](exercise12.15.cpp)

## Exercise 12.16:

> Compilers don't always give easy-to-understand error massages if we attempt to copy or assign a `unique_ptr`. Write a program that contains these errors to see how your compiler diagnoses them.

[ex12.16-codelink](exercise12.16.cpp)

## Exercise 12.17:

> Which of the following `unique_ptr` declarations are illegal or likely to result in subsequent program error? Explain what the program is with each one.

```cpp
int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;
(a) IntP p0(ix);            (b) IntP p1(pi)
(c) IntP p2(pi2);           (d) IntP p3(&ix)
(e) IntP p4(new int(2048))  (f) IntP p5(p2.get());
```

[ex12.17-codelink](exercise12.17.cpp)

## Exercise 12.18:

> Why doesn't `shared_ptr` have a `released` member?

## Exercise 12.19:

[Header](exercise12.19.hpp)|[Implementation](exercise12.19.cpp)

## [Exercise 12.20](ex12_20.cpp)

## Exercise 12.21
> We could have written StrBlobPtr’s deref member as follows:
```cpp
std::string& deref() const
{ return (*check(curr, "dereference past end"))[curr]; }
```
Which version do you think is better and why?

The original one is better, because it's more readable.

## Exercise 12.22 [Header](ex12_22.h)|[Implementation](ex12_22.cpp)
## [Exercise 12.23](ex12_23.cpp)
## [Exercise 12.24](ex12_24.cpp)

## Exercise 12.25

> Given the following new expression, how would you delete pa?
```cpp
int *pa = new int[10];
```

```cpp
delete [] pa;
```

## [Exercise 12.26](ex12_26.cpp)
## Exercise 12.27 [Header](ex12_27_30.h)|[Implementation](ex12_27_30.cpp)|[Test](ex12_27_30_TEST.cpp)

## [Exercise 12.28](ex12_28.cpp)

## Exercise 12.29:
>We could have written the loop to manage the interaction with the user as a do while (5.4.4, p. 189) loop. Rewrite the loop to use a do while. Explain which version you prefer and why.

```cpp
do {
    std::cout << "enter word to look for, or q to quit: ";
    string s;
    if (!(std::cin >> s) || s == "q") break;
    print(std::cout, tq.query(s)) << std::endl;
} while ( true );
```

I prefer `do while`, because it looks clearer.

## Exercise 12.30 [Header](ex12_27_30.h)|[Implementation](ex12_27_30.cpp)|[Test](ex12_27_30_TEST.cpp)

## Exercise 12.31
>What difference(s) would it make if we used a vector instead of a set to hold the line numbers? Which approach is better? Why?

`vector` doesn't guarantee that elements being held are unique, so `set` is a better choice for this case.

## Exercise 12.32 [Header](ex12_32.h)|[Implementation](ex12_32.cpp)|[Test](ex12_32_TEST.cpp)
## Exercise 12.33 [Header](ex12_33.h)|[Implementation](ex12_33.cpp)|[Test](ex12_33_TEST.cpp)
