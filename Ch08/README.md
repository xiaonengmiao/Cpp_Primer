##Exercise 8.1

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

##Exercise 8.2

> Test your function by calling it, passing *cin* as an argument.

[ex8.2-codelink](exercise8.2.cpp)

##Exercise 8.3

> what causes the following *while* to terminate?

```cpp
while (cin >> i) /* ... */
```

##Exercise 8.11

> Add constructors to your *Sales_data* class and write a program to use each of the constructors.

[ex7.11.h-codelink](exercise7.11.h)

[ex7.11.cpp-codelink](exercise7.11.cpp)

##Exercise 8.20

> When are friends useful? Dismiss the pros and cons of using friends.

##Exercise 8.22

> Update your *Sales_data* class to hide its implementation. The programs you've written to use *Sales_data* operations
> should still continue to work. Recompile those programs with your new class definition to verify that they still work.

##Exercise 8.23

> Update your *Person* class to hide its implementation.


