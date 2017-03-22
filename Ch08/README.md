## Exercise 8.1

> Write a function that takes and returns an `istream&`. The function should read the stream until it hits end-of-file. The function should print what it reads to the standard output. Reset the stream so that it is valid before returning the stream.

```cpp
std::istream & func(std::istream & is)
{
    std::string str;
    while (is >> str)
    {
        std::cout << str << std::endl;
    }
    is.clear();
    return is;
}
```

## Exercise 8.2

> Test your function by calling it, passing `cin` as an argument.

[ex8.2-codelink](exercise8.02.cpp)

## Exercise 8.3

> what causes the following `while` to terminate?

```cpp
while (cin >> i) /* ... */
```

when the `cin` is in an error state, `while` will be terminated. such as `badbit`, `failbit` or `eofbit`. 

## Exercise 8.4

> Write a function to open a file for input and read its contents into a `vector` of `strings`, storing each line as a
> separated element in the `vector`.

[ex8.4-codelink](exercise8.04.cpp)

## Exercise 8.5

> Rewrite the previous program to store each word in a separate element.

[ex8.5-codelink](exercise8.05.cpp)

## Exercise 8.6

> Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file. Pass the name of the file as
> an argument to `main` (§ 6.2.5, p. 218).

[ex8.6-codelink](exercise8.06.cpp)

## Exercise 8.7

> Revise the bookstore program from the previous section to write its output to a file. Pass the name of that file as a
> second argument to `main`.

[ex8.7-codelink](exercise8.07.cpp)

## Exercise 8.8

> Revise the program from the program from the previous exercise to append its output to its given file. Run the program on the same output file at least twice to ensure that the data are preserved.

[ex8.8-codelink](exercise8.08.cpp)

## Exercise 8.9

> Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to print the contents of an `istringstream`
> object.

[ex8.9-codelink](exercise8.09.cpp)

## Exercise 8.10

> Write a program to store each line from a file in a `vector<string>`. Now use an `istringstream` to read each element
> from the `vector` a word at a time.

[ex8.10-codelink](exercise8.10.cpp)

## Exercise 8.11

> The program in this section defined its `istringstream` object inside the outer `while` loop. What changes would you
> need to make if `record` were defined outside that loop? Rewrite the program, moving the definition of `record`
> outside the `while`, and see whether you thought of all the changes that are needed.  

[ex8.11-codelink](exercise8.11.cpp)

## Exercise 8.12

> Why didn't we use in-class initializers in `PersonInfo`?

Cause we need a aggregate class here. So it should have no in-class initializers.

## Exercise 8.13

> Rewrite the phone number program from this section to read from a named file rather than from `cin`.

[ex8.13-codelink](exercise8.13.cpp)

## Exercise 8.14

> Why did we declare `entry` and `nums` as `const auto &`?

- cause they are all class type, not the built-in type. so **reference** more effective.
- output shouldn't change their values. so we added the `const`.

