## Exercise 10.01

> The `algorithm` header defined a function named `count` that, like `find`, takes a pair of iterators and a value. `count` returns a count of how often that value appears. Read a sequence of `int`s into a `vector` and point the `count` of how many elements have a given value.

[ex10.01-codelink](exercise10.01.cpp)

## Exercise 10.02

> Repeat the previous program, but read values into a `list` of `string`s.

[ex10.02-codelink](exercise10.02.cpp)

## Exercise 10.03

> Use `accumulate` to sum the elements in a `vector<int>`.

[ex10.03-codelink](exercise10.03.cpp)

## Exercise 10.04

> Assuming `v` is a `vector<double>`, what, if anything, is wrong with calling `accumulate(v.cbegin(),v.cend(),0)`.

[ex10.04-codelink](exercise10.04.cpp)

## Exercise 10.05

> In the call to `equal` on rosters, what would happen if both rosters held C-style strings, rather than library `string`s?

For such case, `std::equal` is going to compare the address value rather than the string value. So the result is not the same as `std::string`. Try to avoid coding this way.

## Exercise 10.06

> Using `fill_n`, write a program to set a sequence of `int` values to 0.

[ex10.06-codelink](exercise10.06.cpp)

## Exercise 10.07

> Determine if there are any errors in the following programs and, if so, correct the error(s):

```cpp
(a) vector<int> vec; list<int> lst; int i;
     while (cin >> i)
      lst.push_back(i); 
     copy(lst.cbegin(), lst.cend(), vec.begin());
(b) vector<int> vec;
     vec.reserve(10); // reserve is covered in § 9.4 (p.356)
     fill_n(vec.begin(), 10, 0);
```
**Fixed**
```cpp
(a) vector<int> vec; list<int> lst; int i;
     while (cin >> i)
      lst.push_back(i);
     vec.resize(sizeof(lst));
     copy(lst.cbegin(), lst.cend(), vec.begin());
(b) vector<int> vec;
     // vec.reserve(10); // reserve is covered in § 9.4 (p.356)
     vec.resize(10); // recommended
     fill_n(vec.begin(), 10, 0);
```

## Exercise 10.08

> We said that algorithms do not change the size of the containers over which they operate. Why doesn't the use of `back_inserter` invalidate this claim?

Inserters like `back_inserter` is part of `<iterator>` rather than `<algorithm>`.

## Exercise 10.09

> Implement your own version of `elimDups`. Test your program by printing the `vector` after you read the input, after the call to `unique`, and after the call to `erase`.

## Exercise 10.10

> Why do you think the algorithms don’t change the size of containers?
