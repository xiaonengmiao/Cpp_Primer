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


