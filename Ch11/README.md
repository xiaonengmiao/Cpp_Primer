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
## Exercise 11.20

> Rewrite the word-counting program from § 11.1 (p. 421) to use `insert` instead of subsripting. Which program do you think is easier to write and read? Explain your reasoning.

[ex11.20-codelink](exercise11.20.cpp)

## Exercise 11.21

> Assuming `word_count` is a `map` from `string` to `size_t` and `word` is a `string`, explain the following loop:
```cpp
while (cin >> word)
  ++word_count.insert({word, 0}).first->second;
```
```cpp
while reading into word
   if word_count has key word:
       word_count[word] += 1
   else:
       word_count[word] = 0
       word_count[word] += 1
```

## Exercise 11.22

> Given a `map<string, vector<int>>`, write the types used as an argument and as the return value for the version of `insert` that inserts one element.

```cpp
std::pair<std::string, std::vector<int>>  // argument
std::pair<std::map<std::string, std::vector<int>>::iterator, bool> // return
```

## Exercise 11.23

> Rewrite the `map` that stored `vector`s of children's names with a key that is the family last name for the exercise in § 11.2.1 (p. 424) to use a `multimap`.

[ex11.23-codelink](exercise11.23.cpp)

## Exercise 11.24

> What does the following program do?
```cpp
map<int, int> m
m[0] = 1;
```

add a key-value `pair { 0, 1 }` into the map.

## Exercise 11.25

> Contrast the following program with the one in the previous exercise.
```cpp
vector<int> v;
v[0] = 1;
```

**UB**, since it's trying to dereference an item out of range.

## Exercise 11.26

> What type can be used to subscript a `map`? What type does the subscript operator return? Give a concrete example--that is, define a `map` and then write the types that can be used to subscript the `map` and the type that would be returned from the subscript operator.

[ex11.26-codelink](exercise11.26.cpp)

## Exercise 11.27

> What kinds of problems would you use `count` to solve? When might you use `find` instead?

I would use count to deal with multimap or multi multiset.

As for the associative container that have unique key, I would use find instead of count.

## Exercise 11.28

> Define and initialize a variable to hold the result of calling `find` on a `map` from `string` to `vector` of `int`.

```cpp
std::map<std::string, std::vector<int>::iterator
```

## Exercise 11.29

> What do `upper_bound`, `lower_bound`, and `equal_range` return when you pass them a key that is not in the container?

If the element is not in the multimap, then lower_bound and upper_bound will return equal iterators; both will refer to the point at which the key can be inserted without disrupting the order.

If no matching element is found, then both the first and second iterators refer to the position where this key can be inserted.

## Exercise 11.30

> Explain the meaning of the operand `pos.first->second` used in the output expression of the final program in this section. 

pos                     a pair
pos.first               the iterator refering to the first element with the matching key
pos.first->second       the value part of the key-value of the first element with the matching key

## Exercise 11.31

> Write a program that defines a `multimap` of authors and their works. Use `find` to find an element in the `multimap` and `erase` that element. Be sure your program works correctly if the element you look for is not in the `map`.

## Exercise 11.32

> Using the `multimap` from the previous exercise, write a program to print the list of authors and their works alphabetically.

## Exercise 11.33

> Implement your own version of the word-transformation program.

## Exercise 11.34:

> What would happen if we used the subscript operator instead of find in the transform function?

Say the code has been changed like below:
```cpp
const string& transform(const string &s, const map<string, string> &m)
{
    return m[s];
}
```
The above code won't compile because the subscript operator might insert an element (when the element with the key s is not found), and we may use subscript only on a map that is not const.

## Exercise 11.35:

> In buildMap, what effect, if any, would there be from rewriting `trans_map[key] = value.substr(1);` as `trans_map.insert({ key, value.substr(1) })`?

- use subscript operator: if a word does appear multiple times, our loops will put the **last** corresponding phrase into trans_map
- use `insert`: if a word does appear multiple times, our loops will put the **first** corresponding phrase into trans_map

## Exercise 11.36:

> Our program does no checking on the validity of either input file. In particular, it assumes that the rules in the transformation file are all sensible.
What would happen if a line in that file has a key, one space, and then the end of the line? Predict the behavior and then check it against your version of the program.

If so, a key-value pair is going to be added into the map: `{key, ""}`. As a result, any key would be replaced with empty string.

## Exercise 11.37:

> What are the advantages of an unordered container as compared to the ordered version of that container? What are the advantages of the ordered version?

[A summary](http://www.cs.fsu.edu/~lacher/courses/COP4531/fall13/lectures/containers2/slide04.html)
