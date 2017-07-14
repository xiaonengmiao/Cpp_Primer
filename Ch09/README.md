# Exercise 9.01

> Which is the most appropriate--a `vector`, a `deque`, or a `list`--for the following program tasks? Explain the
> rationale for your choice. If there is no reason to prefer one or another container, explain why not.

> - (a) Read a fixed number of words, inserting them in the container alphabetically as they are entered. We'll see in the next chapter that associative containers are better suited to this problem.
> - (b) Read an unknown number of words. Always insert new words at the back. Remove the next value from the front.
> - (c) Read an unknown number of integers from a file. Sort the numbers and then print them to standard output.

- (a) Within the three options, `std::list` is the best one. To keep sorted alphabetically, each inserting into `vector` takes theta(n) time complexity, whereas that of `list` (essentially doubly linked list) takes only O(n). Hence theoretically `list` has better performance.
- (b) `deque`. If the program needs to insert or delete elements at the front and the back, but not in the middle, use a `deque`.
- (c) `vector`, no need that insert or delete at the front or back. and If your program has lots of small elements and space overhead matters, don’t use `list` or `forward_list`.


## Exercise 9.02

> Define a `list` that holds elements that are `deques` that hold `ints`.

```cpp
std::list<std::deque<int>> a_list_of_deque_of_ints;
```

## Exercise 9.03

> What are the constraints on the iterators that form iterator ranges.

two iterators, `begin` and `end`:

- they refer to elements of the same container.
- It is possible to reach `end` by repeatedly incrementing `begin`.

## Exercise 9.04

> Write a function that takes a pair of iterators to a `vector<int>` and an `int` value. Look for that value in the
> range and return a `bool` indicating whether it was found.

```cpp
auto contains(vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    for (; begin != end; ++begin)
        if (*begin == i) return true;
    return false;
}
```

## Exercise 9.05

> Rewrite the previous program to return an iterator to the requested element. Note that the program must handle the
> case where the element is not found.

[ex9.05-codelink](exercise9.05.cpp)

## Exercise 9.06

> What is wrong with the following program? How might you correct it?

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();

while (iter1 < iter2) /* ... */
```

**Fixed**

```cpp
While (iter1 != iter2)
```
**note**
operator `<` is not implemented in `std::list`, because `std::list` is essentially a doubly linked list. Addresses of nodes of linked `list` are not necessarily continuous.

## Exercise 9.07

> What type should be used as the index into a `vector` of `ints`?

`vector<int>::size_type`

## Exercise 9.08

> What type should be used to read elements in a `list` of `strings`? To write them?

```cpp
list<string>::const_iterator // to read
lisr<string>::iterator // to write
```

## Exercise 9.09

> What is the difference between the `begin` and `cbegin` functions?

`cbegin` is a `const` member that returns the container’s `const_iterator` type.

`begin` is `nonconst` and returns the container’s iterator type.

## Exercise 9.10

> What are the types of the following four objects?

```cpp
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

`it1` is `vector<int>::iterator`
`it2`, `it3` and `it4` are `vector<int>::const_iterator`

## Exercise 9.11

> Show an example of the each of the six ways to create and initialize a `vector`. Explain what values each `vector`
> contains.

```cpp
vector<int> vec; // 0
vector<int> vec = {0}; // 0
vector<int> vec{0}; // 0
vector<int> vec(1, 0); // 0
vector<int> vec(1); // 0
vector<int> vec(other_vec); // guess 
vector<int> vec(other_vec.begin(),other_vec.end()); // guess
```

## Exercise 9.12

> Explain the differences between the constructor that takes a container to copy and the constructor that takes two
> iterators.

- The constructor that takes another container as an argument (excepting array) assumes the container type and element type of both containers are identical. It will also copy all the elements of the received container into the new one:
```cpp
list<int> numbers = {1,2,3,4,5};
list<int> numbers2(numbers);      // ok, numbers2 has the same elements as numbers
vector<int> numbers3(numbers);    // error: no matching function for call...
list<double> numbers4(numbers);   // error: no matching function for call...
```

- The constructor that takes two iterators as arguments does not require the container types to be identical. Moreover, the element types in the new and original containers can differ as long as it is possible to convert the elements we’re copying to the element type of the container we are initializing. It will also copy only the object delimited by the received iterators.
```cpp
list<int> numbers = { 1, 2, 3, 4, 5 };
list<int> numbers2(numbers.begin(), numbers.end);               // ok, numbers2 has the same elements as numbers
vector<int> numbers3(numbers.begin(), --numbers.end());         // ok, numbers3 is { 1, 2, 3, 4 }
list<double> numbers4(++numbers.beg(), --numbers.end());        // ok, numbers4 is { 2, 3, 4 }
forward_list<float> numbers5(numbers.begin(), numbers.end());   // ok, numbers5 is { 1, 2, 3, 4, 5 }
```

## Exercise 9.13

> How would you initialize a `vector<double>` from a `list<int>`? From a `vector<int>`? Write code to check your
> answers.

[ex9.13-codelink](exercise9.13.cpp)

## Exercise 9.14

> Write a program to assign the elements from a `list` of `char*` pointers to C-style character strings to a `vector` of
> `strings`.

[ex9.14-codelink](exercise9.14.cpp)

## Exercise 9.15

> Write a program to determine whether two `vector<int>`s are equal.

[ex9.15-codelink](exercise9.15.cpp)

## Exercise 9.16

> Repeat the previous program, but compare elements in a `list<int>` to a `vector<int>`.

[ex9.16-codelink](exercise9.16.cpp)

## Exercise 9.17

> Assuming `c1` and `c2` are containers, what (if any) constraints does the folllowing usage place on the types of `c1` and `c2`?
```cpp
if (c1 < c2)
```
First, there must be the identical container and same type holded. Second, the type held must support relational operation. (@Mooophy)

Both c1 and c2 are the containers except the unordered associative containers.(@pezy)

## Exercise 9.18

> Write a program to read a sequence of `strings` from the standard input into a `deque`. Use iterators to write a loop to print the elements in the `deque`.

[ex9.18-codelink](exercise9.18.cpp)

## Exercise 9.19

> Rewrite the program from the previous exercise to use a `list`. List the changes you needed to make.

[ex9.19-codelink](exercise9.19.cpp)

## Exercise 9.20

> Write a program to copy elements from a `list<int>` into two `deques`. The even-valued elements should go into one `deque` and the odd ones into the other.

[ex9.20-codelink](exercise9.20.cpp)

## Exercise 9.21

> Explain how the loop from page 345 that used the return from insert to add elements to a list would work if we inserted into a vector instead.

It's the same.

The first call to `insert` takes the `string` we just read and puts it in front of the element denoted by `iter`. The value returned by `insert` is an `iterator` referring to this new element. We assign that `iterator` to iter and repeat the `while`, reading another word. As long as there are words to `insert`, each trip through the while inserts a new element ahead of `iter` and reassigns to `iter` the location of the newly inserted element. That element is the (new) first element. Thus, each iteration inserts an element ahead of the first element in the `vector`.

## Exercise 9.22

> Assuming `iv` is a `vector` of `ints`, what is wrong with the following program? How might you correct the problem(s)?
```cpp
vector<int>::iterator iter = iv.begin(),
                      mid = iv.begin() + iv.size()/2;
while (iter != mid)
  if (*iter == some_val)
    iv.insert(iter, 2 * some_val)
```
**Problems:**
1. It's a endless loop. iter never equal mid.
2. mid will be invalid after the insert.(see issue 133)

**Fixed:**

```cpp
// cause the reallocation will lead the iterators and references
// after the insertion point to invalid. Thus, we need to call reserver at first.

#include <iostream>
#include <vector>

void double_and_insert(std::vector<int>& v, int some_val)
{
    auto mid = [&]{ return v.begin() + v.size() / 2; };
    for (auto curr = v.begin(); curr != mid(); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
}

int main()
{
    std::vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
    double_and_insert(v, 1);

    for (auto i : v) 
        std::cout << i << std::endl;
}

```
## Exercise 9.23

> In the first program in this section on page 346, what would the values of `val`, `val2`, `val3`, and `val4` be if `c.size()` is 1?

same value that equal to the first element's.

## Exercise 9.24

> Write a program that fetches the first element in a `vector` using `at`, the subscript operator, `front`, and `begin`. Test your program on an empty `vector`.

[ex9.24-codelink](exercise9.24.cpp)

## Exercise 9.25

> In the program on page 349 that erased a range of elements, what happens if elem1 and elem2 are equal? What if elem2 or both elem1 and elem2 are the off-the-end iterator?

if elem1 and elem2 are equal, nothing happened.

if elem2 is the off-the-end iterator, it would delete from elem1 to the end.

if both elem1 and elem2 are the off-the-end iterator, nothing happened too.

## Exercise 9.26

> Using the following defination of `ia`, copy `ia` into a `vector` and into a `list`. Use the single-iterator form of `erase` to remove the elements with odd values from your `list` and the even values from your `vector`.
```cpp
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55，89 }；
```
[ex9.26-codelink](exercise9.26.cpp)

## Exercise 9.27

> Write a function that takes a `forward_list<string>` and two additional `string` arguments. The function should find the first `string` and insert the second immediately following the first `string` is not found, then insert the second `string` at the end of the list.

[ex9.27-codelink](exercise9,27.cpp)

## Exercise 9.28
 
> Write a function that takes a `forward_list` and two additional `string` arguments. The function should find the first `string` and insert the second immediately following the first. If the first `string` is not found, then insert the second `string` at the end of the list.

```cpp
void find_and_insert(forward_list<string> &list, string const& to_find, string const& to_add)
{
    auto prev = list.before_begin();
    for (auto curr = list.begin(); curr != list.end(); prev = curr++)
    {
        if (*curr == to_find)
        {
            list.insert_after(curr, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}
```
## Exercise 9.29

> Given that vec holds 25 elements, what does vec.resize(100) do? What if we next wrote vec.resize(10)?

```cpp
vec.resize(100);    // adds 75 elements of value 0 to the back of vec
vec.resize(10);     // erases 90 elements from the back of vec
```

## Exercise 9.30

> What, if any, restrictions does using the version of resize that takes a single argument place on the element type?

If the container holds elements of a class type and resize adds elements we **must supply an initializer** or the element type must have a **default constructor**.

## Exercise 9.31

> The program on page 354 to remove even-valued elements and duplicate odd ones will not work on a `list` or `forward_list`. Why? Revise the program so that it works on these types as well.

[ex9.31_list-codelink](exercise9.31_list.cpp)
[ex9.32_forward_list-codelink](exercise9.32_forward_list.cpp)

## Exercise 9.32 

> In the program on page 354 would it be legal to write the call to `insert` as follows? If not, why not?
```cpp
iter = vi.insert(iter,*iter++);
```

the statement is illegal, because as said in Standard [5.2.2] :
"The order of evaluation of arguments is unspecified."
As a result, after entering function insert,
iter could be its original value or original value + 1 or even anything else,
depending on how compiler implemented.

## Exercise 9.33

In the final example in this section what would happen if we did not assign the result of `insert` to `begin`? Write a program that omits this assignment to see if your expectation to was correct.

Crash, because the iterator is invalid after inserting.

[ex9.33-codelink](exercise9.33.cpp)

## Exercise 9.34

> Assuming `vi` is a container of `int`s that includes even and odd values, predict the behavior of the following loop. After you've analyzed this loop, write a program to test whether your expectations were correct.
```cpp
iter = vi.begin();
while (iter != vi.end())
  if ( *iter % 2)
    iter = vi.insert(iter, *iter);
  ++iter;
```

"infinite loop". Becasue the `++iter` is outside of the scope of the `while` loop.
Fixed as following.

[ex9.34-codelink](exercise9.34.cpp)

## Exercise 9.35

> Explain the difference between a vector’s capacity and its size.

The **size** of a container is the number of **elements** it already holds;

The **capacity** is how many elements it can hold before more **space** must be allocated.

## Exercise 9.36

> Can a container have a capacity less than its size?

cannot.

## Exercise 9.37

> Why don’t list or array have a capacity member?

`list` does not hold elements contiguously. `array` has the fixed size statically.

## Exercise 9.38

> Write a program to explain how `vector`s grow in the library you use.

[ex9.38-codelink](exercise9.38.cpp)

## Exercise 9.39

> Explain what the following program fragment does:
```cpp
vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
    svec.push_back(word);
svec.resize(svec.size()+svec.size()/2);
```
The `while` loop will read words from `cin` and store them in out vector. Even if we initially `reserved` 1024 elements, if there are more words read from `cin`, our vector's capacity will be automatically increased (most implementations will double the previous capacity) to accommodate them.

And now comes the catch. resize() is different from `reserve()`. In this case `resize()` will add another `svec.size()/2` value initialized elements to `svec`. If this exceeds `svec.capacity()` it will also automatically increase it to accommodate the new elements.

## Exercise 9.40

> If the program in the previous exercise reads 256 words, what is its likely capacity after it is resized? What if it reads 512? 1, 000? 1, 048?

read | size | capacity
------ | ------ | ------
256 | 384 | 1024
512 | 768 | 1024
1000 | 1500 | 2000(clang is 2048)
1048 | 1572 | 2048

## Exercise 9.41

> Write a program that initializes a `string` from a `vector<char>`.

[ex9.41-codelink](exercise9.41.cpp)

## Exercise 9.42

> Given that you want to read a character at a time into a string, and you know that you need to read at least 100 characters, how might you improve the performance of your program?

Use member `reserve(120)` to allocate enough space for this string. (@Mooophy)

## Exercise 9.43

> Write a function that takes three strings, `s`, `oldVal`, and `newVal`. Using iterator, and the `insert`  and `erase` functions replace all instances of `oldVal` that appear in `s` by `newVal`. Test your function by using it to replace common abbreviations, such as "tho" by "though" and "thru" by "through".

[ex9.43-codelink](exercise9.45.cpp)

## Exercise 9.44

> Rewrite the previous function using an index and `replace`.

[ex9.44-codelink](exercise9.45.cpp)

## Exercise 9.45

> Write a function that takes a `string` representing a name and two other `string`s representing a prefix, such as "Mr." or "Ms." and a suffix, such as "Jr." or "III". Using iterators and the `insert` and `append` functions, generate and return a new `string` with the suffix and prefix added to the given name.

[ex9.45-codelink](exercise9.45.cpp)

## Exercise 9.46

> Rewrite the previous exercise using a position and length to manage the `string`s. This time use only the `insert` function.

[ex9.46-codelink](exercise9.46.cpp)

## Exercise 9.47

> Write a program that finds each numeric charater and then each alphabetic charater in the `string` "ab2c3d7R4E6". Write two versions of the program. The first should use `find_first_of`, and the second `find_first_not_of`.

[ex9.47_first-codelink](exercise9.47_first.cpp)
[ex9.47_first_not-codelink](exercise9.47_first_not.cpp)

## Exercise 9.48

> Given the definitions of `name` and `numbers` on page 365, what does `numbers.find(name)` return?

npos

## Exercise 9.49

> A letter has an ascender if, as with `d` or `f`, part of the letter extends above the middle of the line. A letter has a descender if, as with `p` or `g`, part of the letter extends below the line. Write a program that reads a file containing words and reports the longest word that contains neither ascender nor descenders.

[ex9.49-codelink](exercise9.49.cpp)

## Exercise 9.50

> Write a program to process a `vector<string>`s whose elements represent integral values. Produce the sum of all the elements in that `vector`. Change the program so that it sums of `string`s that represent floating-point values.

[ex9.50-codelink](exercise9.50.cpp)

## Exercise 9.51

> Write a class that has three `unsigned` members representing year, month, and day. Write a constructor that takes a `string` representing a date. Your constructor should handle a varity of date formats, such as January 1, 1900, 1/1/1900, Jan 1, 1900, and so on.

[ex9.51-codelink](exercise9.51.cpp)

## Exercise 9.52 

> Use a `stack` to process parenthesized expressions. When you see an open parenthesis, note that it was seen. When you see a close parenthesis after an open parenthesis, `pop` elements down to and including the open parenthesis off the `stack`. `push` a value onto the `stack` to indicate that a parenthesized expression was replaced.

[ex9.52-codelink](exercise9.52.cpp)
