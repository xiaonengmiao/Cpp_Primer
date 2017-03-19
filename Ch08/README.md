## Exercise 8.1

> Write a function that takes and returns an *istream&*. The function should read the stream until it hits end-of-file.
> The function should print what it reads to the standard output. Reset the stream so that it is valid before returning
> the stream.

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

> Test your function by calling it, passing *cin* as an argument.

[ex8.2-codelink](exercise8.2.cpp)

## Exercise 8.3

> what causes the following *while* to terminate?

```cpp
while (cin >> i) /* ... */
```

when the `cin` is in an error state, `while` will be terminated. such as `badbit`, `failbit` or `eofbit`. 

## Exercise 8.4

> Write a function to open a file for input and read its contents into a `vector` of `strings`, storing each line as a
> separated element in the `vector`.

[ex8.4-codelink](exercise8.4.cpp)

## Exercise 8.5

> Rewrite the previous program to store each word in a separate element.

## Exercise 8.6

> Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file. Pass the name of the file as
> an argument to `main` (§ 6.2.5, p. 218).

## Exercise 8.7

> Revise the bookstore program from the previous section to write its output to a file. Pass the name of that file as a
> second argument to `main`.

## Exercise 8.8

> Revise the program from the program from the previous exercise to append its output to its given file. Run the program on the same output file at least twice to ensure that the data are preserved.

## Exercise 8.9

> Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to print the contents of an `istringstream`
> object.

## Exercise 8.20

> When are friends useful? Dismiss the pros and cons of using friends.

## Exercise 8.22

> Update your `Sales_data` class to hide its implementation. The programs you've written to use `Sales_data` operations
> should still continue to work. Recompile those programs with your new class definition to verify that they still work.

## Exercise 8.23

> Update your `Person` class to hide its implementation.


