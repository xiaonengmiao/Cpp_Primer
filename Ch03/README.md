##Exercise3.1

> Rewrite the exercises from § 1.4.1 (p.13) and § 2.6.2 (p.76) with appropriate using declarations.

[ex3.1_1-codelink](exercise3.1_1.cc)
[ex3.1_2-codelink](exercise3.1_2.cc)

##Exercise3.2

> Write a program to read the standard input a line at a time. Motify your program to read a word at time.

[ex3.2-codelink](exercise3.2.cc)

##Exercise3.3

> Explain how whitespace characters are handled in the string input operator and in the getline function.

- code like `is >> s` is separated by whitespaces while reading.

- code like `getline(is, s)` is separated by newline `\n` while reading.

##Exercise3.4

> Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.

[ex3.4-codelink](exercise3.4.cc)

##Exercise3.5

> Write a program to read strings from the standard input, concatenating what is read into one large string. Next, change the program separate adjacent input strings by a space.

[ex3.5-codelink](exercise3.5.cc)

##Exercise3.6

> Use a range for to change all the charaters in a string to X.

[ex3.6-codelink](exercise3.6.cc)

##Exercise3.7

> What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.



[ex3.7-codelink](exercise3.7.cc)

##Exercise3.8

> Rewrite the program in the first exercise, first using a while and again using a traditional for loop. Which of the three approaches do you prefer and why?

##Exercise3.9

> What does the following program do? Is it valid? If not, why not?

```cpp
string s;
cout << s[0] << endl;
```

##Exercise3.10

> Write a program that reads a string of charaters including punctunation and writes what was read but with the punctuation removed.

##Exercise3.11

> Is the following range for legal? If so, what is the type of c?

```cpp
const string s = "Keep out!";
for (auto &c : s) {/* ... */}
```
