## Exercise 7.1

> Write a version of the transaction-processing program from § 1.6 (p.24) using the `Sales_data` class you defined for the exercises in § 2.6.1 (p.72).

[ex7.1-codelink](exercise7.01.cpp)

## Exercise 7.2

> Add the *combine* and *isbn* members to the *Sales_data* class you wrote for the exercises in §2.6.2(p.76).

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

[ex7.9-codelink](exercise7.09.hpp)

## Exercise 7.10

> What does the condition in the following `if` statement do?

```cpp
if (read(read(cin, data1), data2))
```

`if` statement read two `Sales_data` object at once.

## Exercise 7.11

> Add constructors to your *Sales_data* class and write a program to use each of the constructors.

[ex7.11.h-codelink](exercise7.11.hpp)

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
[ex7.27.hpp-codelink](exercise7.27.hpp)
[ex7.27.cpp-codelink](exercise7.27.hpp)

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

There is an error in 
```cpp
dummy_fcn(pos height)
           ^        
Unknown type name 'pos'
```

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

**Fixed**

changed
```cpp
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
```
to
```cpp
Exercise::Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
```

## Exercise 7.36

> The following initializer is in error. Identify and fix the problem.

```cpp
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int rem, base;
};
```

In this case, the constructor initializer makes it appear as if `base` is initialized with `i` and then `base` is used
to initialize `rem`. However, `base` is initialized first. The effect of this initializer is to initialize `rem` with
the undefined value of `base`.

**fixed**

```cpp
struct X {
    X (int i, int j): base(i), rem(base % j) { }
    int base, rem;
};
```

## Exercise 7.37

> Using the version of `Sales_data` from this section, determine which constructor is used to initialize each of the
> following variables and list the values of the data members in each object:

```cpp
Sales_data first_item(cin);

int main() {
    Sales_data next;
    Sales_data last("9-999-99999-9");
}
```

```cpp
Sales_data first_item(cin);  // use Sales_data(std::istream &is); its value are up to your input.

int main() {
    Sales_data next;  // use Sales_data(std::string s = ""): bookNo(s) { }; bookNo="", units_sold=0, revenue=0.0;
    Sales_data last("9-999-99999-9");  // use Sales_data(std::string s = ""): bookNo(s) { }; bookNo="9-999-99999-9",
    units_sold=0, revenue=0.0; 
}
```

## Exercise 7.38

> We might want to supply `cin` as a default argument to the constructor that takes as `istream&`. Write the constructor
> declaration that uses `cin` as a default argument.

```cpp
Sales_data(std::istream &is = std::cin) { read(is, *this); }
```

## Exercise 7.39

> Would it be legal for both the constructor that takes a `string` and the one that takes an `istream&` to have default
> arguments? If not, why not?

illegal. cause the call of overloaded `Sales_data()` is **ambiguous**.

## Exercise 7.40

> Choose one of the following abstractions (or an abstraction of your own choosing). Determine what data are needed in
> the class. Provide an appropriate set of constructors. Explain your decisions.

- (a) Book
- (b) Date
- (c) Employee
- (d) Vehicle
- (e) Object
- (f) Tree

```cpp
#include <iostream>
#include <string>

class Book
{
public:
    Book(unsigned isbn, std::string const& name, std::string const& author, std::string const& pubdate)
        :isbn_(isbn), name_(name), author_(author), pubdate_(pubdate)
    { }

    explicit Book(std::istream &in)
    {
        in >> isbn_ >> name_ >> author_ >> pubdate_;
    }

private:
    unsigned isbn_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};
```

## Exercise 7.41

> Rewrite your own version of the `Sales_data` class to use delegating constructors. Add a statement to the body of each
of the constructors that prints a message whenever it is executed. Write declarations to construct a `Sales_data` object
in every way possible. Study the output until you are certain you understand the order of execution among delegating
constructors.

[ex7.41.h-codelink](exercise7.41.hpp)

[ex7.41_test.c-codelink](exercise7.41_test.cpp)

## Exercise 7.42

> For the class you wrote for exercise 7,40 in § 7.5.1 (p. 291), decide whether any of the constructors might use delegation. If so, write the delegating constructor(s) for your class. If not, look at the list of abstractions and choose one that you think would use a delegating constructor. Write the class definition for that abstraction.

```cpp
#include <iostream>
#include <string>

class Book
{
public:
    Book(unsigned isbn, std::string const& name, std::string const& author, std::string const& pubdate)
        :isbn_(isbn), name_(name), author_(author), pubdate_(pubdate)
    { }

    explicit Book(std::istream &in)
    {
        in >> isbn_ >> name_ >> author_ >> pubdate_;
    }

private:
    unsigned isbn_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};
```

## Exercise 7.43

> Assume we have a class named `NoDefault` that has a constructor that takes an `int`, but has no default constructor.
> Define a class `C` that has a member of type `NoDefault`. Define the default constructor for `C`.

[ex7.43-codelink](exercise7.43.cpp)

## Exercise 7.44

> Is the following declaration legal? If not, why not?

```cpp
vector<NoDefault> vec(10);
```

illegal, cause there are ten elements, each would be default initialized. But no default initializer for the temporary.

## Exercise 7.45

> What if we define the `vector` in the previous exercise to hold objects of type `C`?

No problem. cause `c` have the default constructor.

## Exercise 7.46

> Which, if any, of the following statements are untrue? Why?

- (a) A class must provide at least one constructor. (**untrue**, "The compiler-generated constructor is known as the
  synthesized default constructor.")
- (b) A default constructor is a constructor with an empty parameter list. (**untrue**, a default constructor is a constructor that is used if no initializer is supplied. What's more, a constructor that supplies default arguments for all its parameters also defines the default constructor.)
- (c) If there are no meaningful default values for a class, the class should not provide a default constructor.
  (**untrue**, the class should provide.)
- (d) If a class does not define a default constructor, the compiler generates one that initializes each data member to the default value of its associated type. (**untrue**, only if our class does not explicitly define **any constructors**, the compiler will implicitly define the default constructor for us.)

## Exercise 7.47

> Explain whether the `Sales_data` constructor that takes a `string` should be `explicit`. What are the benefits of
> making the constructor `explicit`? What are the drawbacks?

Whether the conversion of a string to `Sales_data` is desired depends on how we think our users will use the conversion. In this case, it might be okay. The string in `null_book` probably represents a nonexistent ISBN.

Benefits:

- prevent the use of a constructor in a context that requires an implicit conversion
- we can define a constructor which is used only with the direct form of initialization
Drawbacks:

- meaningful only on constructors that can be called with a single argument.

## Exercise 7.48

> Assuming the `Sales_data` constructors are not `explicit`, what operations happen during the following definitions

```cpp
string null_sabn("9-999-99999-9");
Sales_data item1(null_isbn);
Sales_data item2("9-999-99999-9");
```

Both are noting happened.

## Exercise 7.49

> For each of the three following declarations of `combine`, explain what happens if we call `i.combine(s)`, where `i`
> is a `Sales_data` and `s` is a string:

```cpp
- (a) Sales_data &combine(Sales_data); // ok
- (b) Sales_data &combine(Sales_data&); // [error] no matching function for the call to
  'Sales_data::combine(std::string&)' (`std::string&` can not convert to `Sales_data` type.) 
- (c) Sales_data &combine(const Sales_data&) const; // The trailing const mark can't be put here, as it forbids any mutation on data members. This comflicts with combine's semantics.
```

## Exercise 7.50

> Determine whether any of your `Person` class constructors should be `explicit`.

[ex7.50-codelink](exercise7.50.hpp)

## Exercise 7.51

> Why do you think `vector` defines its single-argument constructor as `explicit`, but `string` does not.

Such as a function like that:

```cpp
int getSize(const std::vector<int>&);
```

if `vector` has not defined its single-argument constructor as explicit. we can use the function like:

```cpp
getSize(34);
```

What is this mean? It's very confused.

But the `std::string` is different. In ordinary, we use `std::string` to replace `const char *`(the C language). so when we call a function like that:

```cpp
void setYourName(std::string); // declaration.
setYourName("pezy"); // just fine.
```

it is very natural.

## Exercise 7.52

> Using our first version of `Sales_data` from § 2.6.1 (p. 72), explain the following initialization. Identify and fix
> any problems.

```cpp
Sales_data item = { "978-0590353403", 25, 15.99 };
```

**fixed**

```cpp
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
```

## Exercise 7.53

> Define your own version of `Debug`.

[ex7.53-codelink](exercise7.53.hpp)

## Exercise 7.54

> Should the members of `Debug` that begin with `set_` be declared as `constexpr`? If not, why not?

in C++11, `constexpr` member functions are implicitly `const`, so the "`set_xx`" functions, which will modify data members, cannot be declared as `constexpr`. In C++14, this property no longer holds, so `constexpr` is suitable.

## Exercise 7.55

> Is the `Data` class from § 7.5.5 (p.298) a literal class? If not, why not? If so, explain why it is literal.

no.

`std::string` is not a literal type, and it can be verified by following codes:

```cpp
#include <string>
#include <iostream>
#include <type_traits>

struct Data {
    int ival;
    std::string s;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_literal_type<Data>::value << std::endl;
    // output: false
}
```

## Exercise 7.56

> What is a `static` class member? What are the advantages of `static` members? How do they differ from ordinary
> members?

A `static` class member that is associated with the class, rather than with individual objects of the class type.

each object can no need to store a common data. And if the data is changed, each object can use the new value.

- a static data member can have incomplete type.
- we can use a static member as a default argument.

## Exercise 7.57

> Write your own version of the `Account` class.

[ex7.57-codelink](exercise7.57.hpp)

## Exercise 7.58

> Which, if any, of the following `static` data member declarations and definitions are errors? Explain why.

```cpp
// example.h
class Example
{
    public:
        static double rate = 6.5;
        static const int vecSize = 20;
        static vector<double> vec(vecSize);
};
// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;
```

```cpp
static double rate = 6.5;
                ^
            rate should be a constant expression.

static vector<double> vec(vecSize);
                            ^
            we may not specify an in-class initializer inside parentheses.
```
**Fixed**
```cpp
// example.h
class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);
```

