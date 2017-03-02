## Exercise 7.1

[ex7.1-codelink](exercise7.01.cpp)

## Exercise 7.2

> Add the *combine* and *isbn* members to the *Sales_data* class you wrote for the exercises in

[ex7.2-codelink](exercise7.02.hpp)

## Exercise 7.3

> Revise your transaction-processing program from § 7.1.1 (p.256) to use these members.

[ex7.3-codelink](exercise7.03.cpp)

## Exercise 7.4

> Write a class named `Person` that represents the name and address of a person. Use a `string` to hold each of these
> elements. Subsequent exercises will incrementally add features to this class.

[ex7.4-codelink](exercise7.04.hpp)

## Exercise 7.5

> Provide operations in your `Person` class to return the name and address. Should these functions be `const`? Explain
> your choice.

[ex7.5-codelink](exercise7.05.hpp)

## Exercise 7.6

> Define your own versions of the `add`, `read`, and `print` functions.

[ex7.6-codelink](exercise7.06.hpp)

## Exercise 7.7

> Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p.260) to use these new functions.

[ex7.7-codelink](exercise7.07.cpp)

## Exercise 7.8

> Why does `read` defines its `Sales_data` parameter as a plain reference and `print` define its parameter as a
> reference to const?

function `read` is intended to change the parameter member `revenue`'s value, so it is a plain reference.

function `print` just print out the parameter and it's not intend to change anything.

## Exercise 7.9

> Add operations to read and print `Person` objects to the code you wrote for the exercises in § 7.1.2 (p.260).

## Exercise 7.10

> What does the condition in the following `if` statement do?

```cpp
if (read(read(cin, data1), data2))
```

## Exercise 7.11

> Add constructors to your *Sales_data* class and write a program to use each of the constructors.

[ex7.11.h-codelink](exercise7.11.h)

[ex7.11.cpp-codelink](exercise7.11.cpp)

## Exercise 7.20

> When are friends useful? Dismiss the pros and cons of using friends.

## Exercise 7.22

> Update your *Sales_data* class to hide its implementation. The programs you've written to use *Sales_data* operations
> should still continue to work. Recompile those programs with your new class definition to verify that they still work.

##Exercise 7.23

> Update your *Person* class to hide its implementation.


