## Exercise 7.1

[ex7.1-codelink](exercise7.01.cpp)

## Exercise 7.2

> Add the *combine* and *isbn* members to the *Sales_data* class you wrote for the exercises in

[ex7.2-codelink](exercise7.02.hpp)

## Exercise 7.3

> Revise your transaction-processing program from § 7.1.1 (p.256) to use these members.

[ex7.3-codelink](exercise7.03.cpp)

## Exercise 7.4

> Write a class named `Person` that represents the name and address of a person. Use a `string` to hold each of these
> elements. Subsequent exercises will incrementally add features to this class.

[ex7.4-codelink](exercise7.04.hpp)

## Exercise 7.5

> Provide operations in your `Person` class to return the name and address. Should these functions be `const`? Explain
> your choice.

[ex7.5-codelink](exercise7.05.hpp)

## Exercise 7.6

> Define your own versions of the `add`, `read`, and `print` functions.

[ex7.6-codelink](exercise7.06.hpp)

## Exercise 7.7

> Rewrite the transaction-processing program you wrote for the exercises in § 7.1.2 (p.260) to use these new functions.

[ex7.7-codelink](exercise7.07.cpp)

## Exercise 7.8

> Why does `read` defines its `Sales_data` parameter as a plain reference and `print` define its parameter as a
> reference to const?

function `read` is intended to change the parameter member `revenue`'s value, so it is a plain reference.

function `print` just print out the parameter and it's not intend to change anything.

## Exercise 7.9

> Add operations to read and print `Person` objects to the code you wrote for the exercises in § 7.1.2 (p.260).

## Exercise 7.10

> What does the condition in the following `if` statement do?

```cpp
if (read(read(cin, data1), data2))
```

`if` statement read two `Sales_data` object at once.

## Exercise 7.11

> Add constructors to your *Sales_data* class and write a program to use each of the constructors.

[ex7.11.h-codelink](exercise7.11.h)

[ex7.11.cpp-codelink](exercise7.11.cpp)

## Exercise 7.12

> Move the definition of the `Sales_data` constructor that takes an `istream` into the body of the `Sales_data` class.

[ex7.12-codelink](exercise7.12.hpp)

## Exercise 7.13

> Rewrite the program from page 255 to use the `istream` constructor.

[ex7.13-codelink](exercise7.13.cpp)

## Exercise 7.14

> Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.

```cpp
Sales_data(): units_sold(0), revenue(0.0) { };
```

## Exercise 7.15

Add appropriate constructors to your `Person` class.

[ex7.15-codelink](exercise7.15.hpp)

## Exercise 7.16

> What, if any, are the constraints on where and how often an access specifier may appear inside a class definition?
> What kinds of members should be defined after a `public` specifier? What kinds should be `private`?  

There are no restrictions on how often an access specifier may appear. The specifier access level remains in effect
until the next access specifier or the end of the class body.

The members which are accessible to all parts of the program should define after a public specifier.

The members which are accessible to the member functions of the class but are not accessible to code that uses the
class should define after a private specifier.

## Exercise 7.17

> What, if any, are the differences between using `class` or `struct`?

The only difference between using `class` and using `struct`
 to define a class is the default access level. (`class`: private, `struct`: public)

## Exercise 7.18

> What is encapsulation? Why is it useful?

encapsulation is the separation of implementation from interface. It hides the implementation details of a type. (In
C++, encapsulation is enforced by putting the implementation in the private part of a class)

Important advantages:

- User code cannot inadvertently corrupt the state of an encapsulation object.
- The implementation of an encapsulated class can change over time without requiring changes in user-level code.

## Exercise 7.19

> Indicate which members of your `Person` class you would declare as `public` and which you would declare as `private`.
> Explain your choice.

public: constructors, `getName()`, `getAddress()`. private: `name`, `address`.

the interface should be defined as public, the data should not expose to outside of the class.

## Exercise 7.20

> When are friends useful? Dismiss the pros and cons of using friends.

friend is a mechanism by which a class grants access to its nonpublic members. They have the same rights as members.

Pros:

- the useful functions can refer to class members in the class scope without needing to explicitly prefix them with the class name.
- you can access all the nonpublic members conveniently.
- sometimes, more readable to the users of class.
Cons:

- lessens encapsulation and therefore maintainability.
- code verbosity, declarations inside the class, outside the class.

## Exercise 7.21

> Update your `Sales_data` class to hide its implementation. The programs you've written to use `Sales_data` operations
> should still continue to work. Recompile those programs with your new class definition to verify that they still work.

[ex7.21-codelink](exercise7.21.hpp)

## Exercise 7.22

> Update your `Person` class to hide its implementation.

[ex7.22-codelink](exercise7.22.hpp)

## Exercise 7.23

> Write your own version of the `Screen` class.

[ex7.23-codelink](exercise7.23.hpp)

## Exercise 7.24

> Give your `Screen` class three constructors: a default constructor; a constructor that takes values for height and
> width and initializes the contents to hold the given number of blanks; and a constructor that takes values for height,
> width, and a character to use as the contents of the screen.

[ex7.24-codelink](exercise7.24.hpp)

## Exercise 7.25

> Can `Screen` safely rely on the default versions of copy and assignment? If so, why? If not, why not?

The class below can rely on it. It goes in Section 7.1.5:

> ..the synthesized versions are unlikely to work correctly for classes that allocate resources that reside outside the class objects themselves.

> Moreover, the synthesized versions for copy, assignment, and destruction work correctly for classes that have vector or string members.

Hence the class below which used only built-in type and strings can rely on the default version of copy and assignment. (by @Mooophy)

## Exercise 7.26

> Define `Sales_data::avg_price` as an `inline` function.

[ex7.26-codelink](exercise7.26.hpp)


## Exercise 7.27

> Add the `move`, `set`, and `display` operations to your version of Screen. Test your class by executing the following
> code:

```cpp
Screen myScreen(5, 5, 'X');
myScreen.move(4, 0).set('#').display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";
```

## Exercise 7.28

> What would happen in the previous exercise if the return type of `move`, `set`, and `display` was `Screen` rather than
> `Screen&`?

The second call to `display` couldn't print # among the output, cause the call to set would change the temporary copy, not `myScreen`.

## Exercise 7.29

> Revise your `Screen` class so that `move`, `set`, and `display` functions return `Screen` and check your prediction
> from the previous exercise.

```sh
# with '&'
XXXXXXXXXXXXXXXXXXXX#XXXX
XXXXXXXXXXXXXXXXXXXX#XXXX
                   ^^^
# without '&'
XXXXXXXXXXXXXXXXXXXX#XXXX
XXXXXXXXXXXXXXXXXXXXXXXXX
                   ^^^
```

## Exercise 7.30

> It is legal but redundant to refer to members through the `this` pointer. Discuss the pros and cons of explicitly
> using the `this` pointer to access members.

**Pros**

- more explicit
- less scope for misreading
- can use the member function parameter which name is same as the member name.

            void setAddr(const std::string &addr) { this->addr = addr; }

**Cons**

- more to read
- sometimes redundant

            std::string getAddr() const { return this->addr; } // unnecessary
 
## Exercise 7.31

> Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an object of type X.

[ex7.31-codelink](exercise7.31.hpp)

## Exercise 7.32

> Define your own versions of `Screen` and `Window_mgr` in which clear is a member of `Window_mgr` and a friend of
> `Screen`.

[ex7.32-codelink](exercise7.32.hpp)

## Exercise 7.33

> What would happen if we gave `Screen` a `size` member defined as follows? Fix any problems you identify.

```cpp
pos Screen::size() const
{
    return height * width;
}
```

fixed:

```cpp
Screen::pos Screen::size() const
{
    return height * width;
}
```

## Exercise 7.34

> What would happen if we put the `typedef` of `pos` in the `Screen` class on page 285 as the last line in the class?

## Exercise 7.35

> Explain the following code, indicating which definition of `Type` or `initVal` is used for each use of those names.
> Say how you would fix any errors.

```cpp
typedef string Type;
Type initVal();
class Exercise {
    public:
    typedef double Type;
    Type setVal(Type);
    private:
    int val;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
```
