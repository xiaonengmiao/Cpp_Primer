##Exercise 1.1 

> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program from page 2.

[ex1.1-codelink](exercise1.1.cc)

##Exercise 1.2 

> Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

##Exercise 1.3

> Write a program used to print Hello, World on the standard output.

[ex1.3-codelink](exercise1.3.cc)

##Exercise 1.4

> Our program used the addition, +, to add two numbers. Write a program that uses the multiplication operator, *, to print each operand.

[ex1.4-codelink](exercise1.4.cc)

##Exercise 1.5

> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

##Exercise 1.6

> Explain whether the following program fragment is legal.

```cpp
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```
> If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

[ex1.6-codelink](exercise1.6.cc)

##Exercise 1.7

> Compile a program that has incorrectly nested comments.

##Exercise 1.8

> Indicate which, if any, of the following output statements are legal:

```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /*  "*/" /*  "/*"  */;
```
> After you've predicted what will happen, test your answers by compiling a aprogram with each of these statements. Correct any errors you encounter.

[ex1.8-codelink](exercise1.8.cc)

##Exercise 1.9

> Write a program that uses a while to sum the numbers from 50 to 100.

[ex1.9-codelink](exercise1.9.cc)

##Exercise 1.10

> In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that substracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.

[ex1.10-codelink](exercise1.10.cc)

##Exercise 1.11

> Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

[ex1.11-codelink](exercise1.11.cc)

##Exercise 1.12

> What does the following for loop do? What is the final value of sum?

```cpp
int sum = 0;
for (int 1 = -100; i <= 100; ++i)
    sum += 1;
```
the loop sums the numbers from -100 to 100.

##Exercise 1.13

> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

Ex1.9:

```cpp
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i) sum += i;
    std::cout << "Sum is" << sum << std::endl;

    return 0;
}
```

Ex1.10:

```cpp
#include <iostream>

int main()
{
    sum = 0;
    for (int i = 10; i >= 0; --i) sum += i;
    std::cout << "Sum is" << sum << std::endl;

    return 0;
}
```

Ex1.11:

```cpp
#include <iostream>

int main()
{
    std::cout << "Please input two integers:\n";
    int a = 0, b = 0;
    std::cin >> a >> b;
    
    if (a > b)
    {
        int tmp = a;
	a = b;
	b = tmp;
    }
    
    for (int i = a; i != b; ++i) std::cout << i << std::endl;

    return 0;
}
```

##Exercise 1.14

> Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form.

use either one u like!!!

##Exercise 1.15

> Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

you can try it yourself.

##Exercise 1.16

> Write your own version of a program that prints the sum of a set of integers read from cin.

```cpp
#include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value) sum += value;
    std::cout << "Sum is" << sum << std::endl;

    return 0;
}
```
##Exercise 1.17

> What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

if the input values are all equal, it will print a line shows the count of the number.

if there are no duplicated values, it will print lines shows each number.

##Exercise 1.18

> Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

##Exercise 1.19

> Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

[ex1.19-codelink](exercise1.19.cc)

##Exercise 1.20

> [http://www.informit.com/title/0321714113](http://www.informit.com/title/0321714113) contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales trasactions, writing each trasaction to the standard output.

[ex1.20-codelink](exercise1.20.cc)

##Exercise 1.21

> Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

[ex1.21-codelink](exercise1.21.cc)

##Exercise 1.22

> Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

##Exercise 1.23

> Write a program that reads several transactions and counts how many transactions occurs for each ISBN.

##Exercise 1.24

> Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together.

##Exercise 1.25

> Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.
