## Exercise 4.1

> What is the value returned by 5 + 10 * 20/2?

105

## Exercise 4.2

> Using Table 4.12(p. 166) parenthesize the following expressions to indicate the order in which the operands are grouped:

```cpp
(a) * vec.begin() // *(vec.begin())
(b) * vec.begin() + 1 // (*(vec.begin())) + 1
```

## Exercise 4.3

> Order of evaluation for most of the binary operators is left undefined to give the compiler opprtunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the languege by the programmer. Do you consider that an acceptble trade-off? Why or why not?

No, this makes bugs tricky to handle.

## Exercise 4.4

> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 // ((12 / 3) * 4) + (5 * 15) + ((24 % 2) / 2)
// print: 91
```

## Exercise 4.5

> Determine the result of the following expressions.

```cpp
(a) -30 * 3 + 21 / 5 // -90 + 4 = -86
(b) -30 + 3 * 21 / 5 // -30 + 63/5 = -18
(c) 30 / 3 * 21 % 5 // 10 * 21 % 5 = 210 % 5 = 0
(d) -30 / 3 * 21 % 4 // -10 * 21 % 4 = -210 % 4 = -2
```

## Exercise 4.6

> Write an expression to determine whether an `int` value is even or odd.

```cpp
(i%2 == 0) ? 0 : 1;
```

## Exercise 4.7

> What does overflow mean? Show three expressions that will overflow.

```cpp
short value = 32767; ++value; // -32768
unsigned value = 0; --value; // 4294967295
unsigned short value = 65535; ++value; // 0
```
## Exercise 4.8

> Explain when operands are evaluated in the logical `AND`, logical `OR`, and equality operators.

The logical `AND` and `OR` operators always evaluate their left operand before the right. Moreover, the right operand is evaluated if and only if the left operand does not determine the result. This strategy is known as **short-circuit evaluation**.

- logical `AND` : the second operand is evaluated if and only if the left side is true.

- logical `OR` : the second operand is evaluated if and only if the left side is false

- equality operators == : undefined.

## Exercise 4.9

> Explain the behavior of the condition in the following `if`:
```cpp
const char *cp = "Hello World";
if (cp && *cp)
```
cp is a pointer to `const char *`, and it's not a nullptr. true.

`*cp` is a const char: 'H', and it is explicit a nonzero value. true.

true && true -> true.

## Exercise 4.10

> Write the condition for a `while` loop that would read `int`s from the standard input and stop when the value read is equal to 42.

[ex4.10-codelink](exercise4.10.cpp)

## Exercise 4.11

> Write an expression that tests four values, `a`, `b`, `c`, and `d`, and ensures that `a` is greater than `b`, which is greater than `c`, which is greater than `d`.

[ex4.11-codelink](exercise4.11.cpp)

## Exercise 4.12

> Assuming `i`, `j`, and `k` are all `int`s, explain what `i` != `j` < `k` means.

`i != j < k` is equivalent to `i != (j < k)`.

## Exercise 4.13

> What are the values of `i` and `d` after each assignment?
```cpp
int i; double d;
(a) d = i = 3.5; // i = 3, d = 3.0
(b) i = d = 3.5; // d = 3.5, i = 3
```

## Exercise 4.14

> Explain what happens in each of the `if` tests:
```cpp
if (42 = i)  // complie error: expression is not assignable
if (i = 42)  // true
```

## Exercise 4.15

> The following assignment is illegal. Why? How would you correct it?
```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
// pi is a pointer to int.
// can not assign to `int` from type `int *`
// correct it
dval = ival = 0;
pi = 0;
```

## Exercise 4.16

> Although the following are legal, they probably do not bahave as the programmer expects. Why? Rewrite the expressions as you think they should be.
```cpp
(a) if (p = getPtr() != 0)    (b) if (i = 1024)
// correct it
(a) if ((p = getPtr()) != 0)
(b) if (i == 1024)
```

## Exercise 4.17

> Explain the difference between prefix and postfix increment.

See: [What is the difference between ++i and i++](https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i)

## Exercise 4.18

> What would happen if the `while` loop on page 148 that prints the elements from a `vector` used the prefix increment operator?

It will print from the second element and dereference v.end() at last, which is a **UB**.

## Exercise 4.19

> Given that `ptr` points to an `int`, that `vec` is a `vector<int>`, and that `ival` is an `int`, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?
```cpp
(a) ptr != 0 && *ptr++       // check ptr is not a nullptr, and then check the pointer value is not 0
(b) ival++ && ival           // check ival, and then ival+1 is not 0
(c) vec[ival++] <= vec[ival] // incorrect. It is an **undefined behavior.**
// correct it
(c) vec[ival] <= vec[ival+1]
```
See [order of evaluation](http://en.cppreference.com/w/cpp/language/eval_order)

## Exercise 4.20

> Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.
```cpp
(a) *iter++;  (b) (*iter)++;  (c) *iter.empty();
(d) iter->empty;  (e) ++*iter;  (f) iter++->empty();
```

## Exercise 4.21

> Write a program to use a conditional operator to find the elements in a `vector<int>` that have odd value and double the value of each such element.

[ex4.21-codelink](exercise4.21.cpp)

## Exercise 4.22

> Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more `if` statements. Which version do you think is easier to understand and why?

[ex4.22-codelink](exercise4.22.cpp)

## Exercise 4.23

> The following expression fails to complie due to operator precedence. Using Table 4.12(p.166), explain why it fails. How would you fix it?
```cpp
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "S";
```
Operator Precedence: `?:` < `+` Fix it:
```cpp
string pl = s + (s[s.size() - 1] == 's' ? "" : "S");
```

## Exercise 4.24

> Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.


