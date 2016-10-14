##Exercise4.1

> What is the value returned by 5 + 10 * 20/2?

105

##Exercise4.2

> Using Table 4.12(p. 166) parenthesize the following expressions to indicate the order in which the operands are grouped:

```cpp
(a) * vec.begin() // *(vec.begin())
(b) * vec.begin() + 1 // (*(vec.begin())) + 1
```

##Exercise4.3

> Order of evaluation for most of the binary operators is left undefined to give the compiler opprtunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the languege by the programmer. Do you consider that an acceptble trade-off? Why or why not?

No, this makes bugs tricky to handle.

##Exercise4.4

> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 // ((12 / 3) * 4) + (5 * 15) + ((24 % 2) / 2)
```

##Exercise4.5

> Determine the result of the following expressions.

```cpp
(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4
```

##Exercise4.6

> Write an expression to determine whether an `int` value is even or odd.

##Exercise4.7

> What does overflow mean? Show three expressions that will overflow.

