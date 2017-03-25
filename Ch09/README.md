## Exercise 9.01

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

