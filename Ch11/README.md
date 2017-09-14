## Exercise 11.01

> Describe the differences between a `map` and a `vector`.

`map` is an associative container whereas `vector` is a sequence container.

## Exercise 11.02

> Give an example of when each of `list`, `vector`, `map` and `set` might be most useful.

- list : anytime when a doubly-linked list is required.
- vector : anytime when a dynamic array is required.
- deque : [An answer from SO](https://stackoverflow.com/questions/3880254/why-do-we-need-deque-data-structures-in-the-real-world).
- map : dictionary.
- set : when to keep elements sorted and unique.

## Exercise 11.03

> Write your own version of the word-counting program.

[ex11.03-codelink](exercise11.03.cpp)

## Exercise 11.04

> Extend your program to ignore case and punctuation. For example, "example." "example," and "Example" should all increment the same counter.

[ex11.04-codelink](exercise11.04.cpp)

## Exercise 11.05

> Explain the difference between a `map` and a `set`. When might you use one or the other?

[Answer from SO](https://stackoverflow.com/questions/16286714/advantages-of-stdset-vs-vectors-or-maps)

## Exercise 11.06

> Explain the difference between a `set` and a `list`. When might you use one or the other?

[Answer from SO](https://stackoverflow.com/questions/2302681/c-stl-list-vs-set)

## Exercise 11.07

> Define a `map` for which the key is the family's last name and the value is a `vector` of the children's names. Write code to add new family and to add new children to an existing family.

[ex11.07-codelink](exercise11.07.cpp)

## Exercise 11.08

> Write a program that stores the excluded words in a `vector` instead of in a `set`. What are the advantages to using a `set`?

[ex11.08-codelink](exercise11.08.cpp)

copied from the post on stack overflow:
1.No matter what elements you add or remove (unless you add
a duplicate, which is not allowed in a set), it will always
be ordered.
2.A vector has exactly and only the ordering you explicitly
give it. Items in a vector are where you put them. If you put
them in out of order, then they're out of order; you now need
to sort the container to put them back in order.
3.However, if you are constantly inserting and removing items
from the container, vector will run into many issues.
4.The time it takes to insert an item into a vector is proportional
to the number of items already in the vector. The time it takes
to insert an item into a set is proportional to the log of the
number of items. If the number of items is large, that's a huge
difference. Log(100, 000) is 17; that's a major speed improvement.
The same goes for removal.

## Exercise 11.09

> Define a `map` that associates words with a `list` of line numbers on which the word might occur.

```cpp
map<string, list<size_t>> m;
```

## Exercise 11.10

> Could you define a `map` from `vector<int>::iterator` to `int`? What about from `list<int>::iterator` to `int`? In each case, if not, why not?

[ex11.10-codelink](exercise11.10.cpp)

`vector<int>::iterator` to `int` is ok , because < is defined

`list<int>::iterator` to `int` is not ok, as no < is defined.<Paste>

## Exercise 11.11

> Redifine `bookstore` without using `decltype`.

[ex11.11-codelink](exercise11.11.cpp)

## Exercise 11.12

> Write a program to read a sequence of `string`s and `int`s, storing each into a `pair`. Store the `pair`s in a `vector`.

[ex11.12-codelink](exercise11.12.cpp)

## Exercise 11.13

> There are at least three ways to create the `pair`s in the program for the previous exercise. Write three versions of that program, creating the `pair`s in each way. Explain which form you think is easiest to write and understand, and why.

## Exercise 11.14

> Extend the map of children to their family name that you wrote for the exercises in § 11.2.1 (p. 424) by having the `vector` store a `pair` that hold a child's name and birthday.

## Exercise 11.15

> What are the `mapped_type`, `key_type`, and `value_type` of a `map` from `int` to `vector<int>`?

`mapped_key` : `vector<int>`
`key_type` : `int`
`value_type` : `pair<int, vector<int>>`

## Exercise 11.16

> Using a `map` iterator write an expression that assigns a value to an element.

```cpp
std::map<int, std::string> map;
std::map<int, std::string>::iterator it = map.begin();
it->second = "Tech";
```

## Exercise 11.17

> Assuming `c` is a `multiset` of `string`s and `v` is a `vector` of `string`s, explain the following calls. Indicate whether each call is legal:
```cpp
copy(v.begin(), v.end(), inserter(c, c.end()));
copy(v.begin(), v.end(), back_inserter(c));
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));
```
```cpp
copy(v.begin(), v.end(), inserter(c, c.end())); // legal
copy(v.begin(), v.end(), back_inserter(c));     // illegal, no `push_back` in `set`
copy(c.begin(), c.end(), inserter(v, v.end())); // legal
copy(c.begin(), c.end(), back_inserter(v));     // legal
```

## Exercise 11.18

> Write the type of `map_it` from the loop on page 430 without using `auto` or `decltype`.

```cpp
std::map<std::string, size_t>::const_iterator;
```

## Exercise 11.19

> Define a variable that you initialize by calling `begin()` on the `multiset` named `bookstore` from § 11.2.2(p.425). Write the variable's type without using `auto` and `decltype`.

```cpp
using compareType = bool (*)(const Sales_data &lhs, const Sales_data &rhs);
std::multiset<Sales_data, compareType> bookstore(compareIsbn);
std::multiset<Sales_data, compareType>::iterator c_it = bookstore.begin();
```

