## Exercise 5.01
> What is a null statement? When might you use a null statement?

A null statement is the empty statement. like this:
```cpp
; // null statement
```

The null statement may be used as a placeholder when a statement is expected. For example:
```cpp
// read until we hit end-of-file or find an input equal to sought
while (cin >> s && s != sought)
    ; // null statement.
```

## Exercise 5.02
> What is a block? When might you might use a block?

A block is a (possibly empty) sequence of statements and declarations surrounded by a pair of curly braces.It's used when multiple statements are needed.For example:
```cpp
while (val <= 10)
{
    sum += val;
    ++val;
}
```

## Exercise 5.03
>Use the comma operator (§ 4.10, p. 157) to rewrite the while loop from § 1.4.1 (p. 11)
so that it no longer requires a block.
Explain whether this rewrite improves or diminishes the readability of this code.

```cpp
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}
```

This rewritten version diminishes the readability. 

## Exercise 5.04
> Explain each of the following examples, and correct any problems you detect.
- (a) while (string::iterator iter != s.end()) { /* . . . */ }
- (b) while (bool status = find(word)) { /* . . . */ } if (!status) { /* . . . */ }

(a) Illegal declaration : `string::iterator iter != s.end()`
```cpp
//corrrected as:
std::string::iterator iter = s.begin();
while (iter != s.end()) { /* . . . */ }
```

(b) Variable `status` is only declared inside scope of while condition.
```cpp
//corrrected as:
while (bool status = find(word)) { 
    /* ... */ 
    if (!status) { /* ... */ }
}
```  

## Exercise 5.05

> Using an `if-else` statement, write your own version of the program to generate the letter grade from a numeric grade.

[ex5.05-codelink](exercise5.05.cpp)

## Exercise 5.06

[ex5.06-codelink](exercise5.06.cpp)

## Exercise 5.07
>Correct the errors in each of the following code fragments:
```cpp
(a) if (ival1 != ival2) ival1 = ival2
    else ival1 = ival2 = 0;
(b) if (ival < minval) minval = ival;
    occurs = 1;
(c) if (int ival = get_value())
    cout << "ival = " << ival << endl;
    if (!ival)
    cout << "ival = 0\n";
(d) if (ival = 0)
    ival = get_value();
```

```cpp
(a) if (ival1 != ival2) ival1 = ival2;  // Need to add semicolon.
    else ival1 = ival2 = 0;
(b) if (ival < minval)                  // Braces needed to include both satetments in scope.
    {
        minval = ival;
        occurs = 1;
    }
(c) if (int ival = get_value())         //Second if statement should be else-if.
        cout << "ival = " << ival << endl;
    else if (!ival)
        cout << "ival = 0\n";
(d) if (ival == 0)                      //Expression changed from assignment to "equal to";
    ival = get_value();
```

## Exercise 5.08
> What is a “dangling else”? How are else clauses resolved in C++?

Colloquial term used to refer to the problem of how to process nested if statements in which there are more ifs than elses. In C++, an else is always paired with the closest preceding unmatched if.

## Exercise 5.09

> Write a program using a series of if statements to count the number of vowels in text read from `cin`.

[ex5.09-codelink](exercise5.09.cpp)

## Exercise 5.10

> There is one problem with our vowels-counting program as we've implement it: It doesn't count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel--that is, your program should count both 'a' and 'A' as part of `aCnt`, and so forth.

[ex5.10-codelink](exercise5.10.cpp)

## Exercise 5.11

> Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.

[ex5.11-codelink](exercise5.11.cpp)

## Exercise 5.12

> Each of the programs in the highlighted text on page 184 contains a conmmon programming error. Identify and correct each error.

[ex5.12-codelink](exercise5.12.cpp)

## Exercise 5.13
> Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.
```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++;
        case 'e': eCnt++;
        default: iouCnt++;
    }
(b) unsigned index = some_value();
    switch (index) {
        case 1:
            int ix = get_value();
            ivec[ ix ] = index;
            break;
        default:
            ix = ivec.size()-1;
            ivec[ ix ] = index;
    }
(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1, 3, 5, 7, 9:
            oddcnt++;
            break;
        case 2, 4, 6, 8, 10:
            evencnt++;
            break;
    }
(d) unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
```

```cpp
(a) // Error: should have a break statement
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++; break;
        case 'e': eCnt++; break;
        default : iouCnt++; break;
    }
(b) // Error: control bypass an explicitly initialized variable ix.
    unsigned index = some_value();
    switch (index) {
        case 1:
            int ix;
            ivec[ ix ] = index;
            break;
        default:
            ix = static_cast<int>(ivec.size())-1;
            ivec[ ix ] = index;
    }
(c) // Error: case label syntax error
    unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1: case 3: case 5: case 7: case 9:
            oddcnt++;
            break;
        case 2: case 4: case 6: case 8: case 0:
            evencnt++;
            break;
    }
(d) // Error: case label must be a constant expression
    const unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
```

## Exercise 5.14
> Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input is
```sh
how now now now brown cow cow
```
the output should indicate that the word now occurred three times.

- [concise solution](exercise5.14.cpp)


## Exercise 5.15
> Explain each of the following loops. Correct any problems you detect.
```cpp
(a) for (int ix = 0; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
    // . . .
(b) int ix;
    for (ix != sz; ++ix) { /* ... */ }
(c) for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }
```

```cpp
(a) int ix;
    for (ix = 0; ix != sz; ++ix)  { /* ... */ }
    if (ix != sz)
    // . . .
(b) int ix;
    for (; ix != sz; ++ix) { /* ... */ }
(c) for (int ix = 0; ix != sz; ++ix) { /*...*/ }
```

## Exercise 5.16
> The while loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally thought of as a **step loop**: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

```cpp
// while idiomatic
int i;
while ( cin >> i )
    // ...

// same as for
for (int i = 0; cin >> i;)
    // ...

// for idiomatic
for (int i = 0; i != size; ++i)
    // ...

// same as while
int i = 0;
while (i != size)
{
    // ...
    ++i;
}
```

I prefer `for` to `while` in such cases, because it's terse. More importantly, object i won't pollute the external scope after it goes out of the loop. It's a little bit easier to add new code into the external scope, since it reduces the possibility of naming conflicts .That is, a higher maintainability. Of course, this way makes the code a bit harder to read. ([@Mooophy](https://github.com/Mooophy))

## Exercise 5.17

> Given two `vector`s of `int`s, write a program to determine whether one `vector` is a prefix of the the other. For `vector`s of unequal length, compare the number of elements of the smaller `vector`. For example, given the `vector`s containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, repectively your program should return `true`.

[ex5.17-codelink](exercise5.17.cpp)

## Exercise 5.18
> Explain each of the following loops. Correct any problems you detect.
```cpp
(a) do { // added bracket.
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    }while (cin);
(b) int ival;
    do {
        // . . .
    } while (ival = get_response()); // should not declared in this scope.
(c) int ival = get_response();
    do {
        ival = get_response();
    } while (ival); // ival is not declared in this scope.
```

## Exercise 5.19

> Write a program that uses a `do while` loop to repetitively request two `string`s from the user and report which `string` is less than the other.

[ex5.19-codelink](exercise5.19.cpp)

## Exercise 5.20

> Write a program to read a sequence of `string`s from the standard input until either the same word occurs twice in succession or all the words have been read. Use a `while` loop to read the text one word at a time. Use the `break` statement to terminate the loop if a word occurs twice in succession. Print the word if it occurs twice in succession, or else print a message saying that no word was repeated.

[ex5.20-codelink](exercise5.20.cpp)

## Exercise 5.21

## Exercise 5.22
> The last example in this section that jumped back to begin could be better written using a loop. Rewrite the code to eliminate the goto.
```cpp
// backward jump over an initialized variable definition is okay  
begin:
    int sz = get_size();
    if (sz <= 0) {
        goto begin;
    }
```

use `for` to replace `goto`:
```cpp
for (int sz = get_size(); sz <=0; sz = get_size())
    ; // should not remove.
```

## Exercise 5.23

> Write a program that reads two integers from the standard input and prints the result of dividing the first number by the second.

[ex5.23-codelink](exercise5.23.cpp)

## Exercise 5.24

> Revise your program to throw an exception if the second number is zero. Test your program with a zero input to see what happens on your system if you don't `catch` an exception.

[ex5.24-codelink](exercise5.24.cpp)

## Exercise 5.25

> Revise your program from the previous exercise to use a `try` block to `catch` the exception. The `catch` clause should print a message to the user and ask them to supply a new number and repeat the code inside the `try`.

[ex5.25-codelink](exercise5.25.cpp)
