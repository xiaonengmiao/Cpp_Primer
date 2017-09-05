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
