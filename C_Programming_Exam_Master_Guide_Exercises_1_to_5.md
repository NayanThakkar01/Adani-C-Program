# C Programming Exam Master Guide

## Beginner → Exam Ready \| Syllabus + College Material + Practical Exercises 1--5

> **Important scope:** This guide is intentionally focused on **C
> programming only** and on the practical material through **Exercise 5
> (Arrays)**. Exercises 6--9 from the practical list (Functions,
> Strings, Pointers/File Operations, Structure/Union) are **not included
> as exam practice**, because you asked to stop the final practice list
> at Exercise 5.
>
> The guide also covers the theory required to understand and write the
> programs in the syllabus. It is written so that a student who has
> **never programmed before** can start from zero.

------------------------------------------------------------------------

# 0. How to Use This Guide

If you have never programmed before, do **not** try to memorize 30+
programs.

Learn the small building blocks first:

``` text
1. C program structure
2. Variables + data types
3. printf + scanf
4. Operators
5. if / else
6. switch
7. for / while / do-while
8. Nested loops
9. Arrays + nested loops
10. Program patterns
```

Then every practical question becomes a combination of these blocks.

### Exam rule

When you see a question, ask:

**What type of problem is this?**

  Question contains...     Think...
  ------------------------ -------------------------
  Calculate / formula      Variables + operators
  Check / determine        `if`
  Many fixed choices       `switch`
  Repeat N times           `for`
  Repeat until condition   `while`
  Must execute once        `do-while`
  Pattern                  Nested loops
  Many values              Array
  Matrix                   2D array + nested loops

------------------------------------------------------------------------

# 1. Your Exact Exam Scope

## Syllabus Topics

### Unit 1 --- Basics of Programming

-   Introduction to problem solving with computers
-   Programming using a modern programming language such as C/C++/Java
-   Programming paradigms
-   Flowcharts
-   Algorithms
-   Machine representation

### Unit 2 --- Features of C Language

-   Structure of C program
-   Compilation and execution
-   Comments
-   Header files
-   Data types
-   Constants and variables
-   Operators
-   Expressions
-   Evaluation of expressions
-   Type conversion
-   Precedence and associativity
-   I/O functions
-   Simple statements
-   `if`
-   `if-else`
-   `else-if` ladder
-   `switch-case`
-   `for`
-   `while`
-   `do-while`
-   Nested control structures
-   `break`
-   `continue`
-   `goto`

### Unit 3 --- Array & String

For your practical/exam preparation, the important part is:

-   Array concept
-   1D arrays
-   2D arrays
-   Declaration
-   Initialization
-   Processing arrays using loops
-   Matrix programs

------------------------------------------------------------------------

# 2. Practical Scope --- STOP AT EXERCISE 5

Your college practical list contains later exercises on functions,
strings, pointers/files, and structures/unions. For this guide, **do not
prepare those as final practical practice**.

## Exercise 1 --- Basic C Programs

1.  Hello World
2.  Print student's name
3.  Print multiple lines
4.  Input a value and print it

## Exercise 2 --- Data Types, Operators, Expressions

1.  Interchange two variables
2.  Simple interest
3.  Arithmetic operations on two numbers
4.  Student name, roll number, 3 subject marks and percentage
5.  Volume of cube
6.  Gross salary
7.  Employee ID, hours and hourly salary
8.  Average of three numbers

## Exercise 3 --- Decision Statements

1.  Even or odd
2.  Maximum of two
3.  Divisible by 5 and 11
4.  Positive, negative or zero
5.  Weekday using `switch`
6.  Days in month
7.  Maximum of three using nested `if-else`
8.  Calculator using `switch`
9.  Division using `if-else-if`
10. Gross salary using conditions

## Exercise 4 --- Loops and Nested Loops

1.  Sum of first N natural numbers
2.  Factorial
3.  Fibonacci series
4.  Palindrome number
5.  Multiplication table
6.  Armstrong number
7.  Reverse digits
8.  Patterns

## Exercise 5 --- Arrays

1.  Read and display N numbers
2.  Sum of 10 numbers
3.  Maximum and minimum of 5 numbers
4.  Marks of 5 students × 3 subjects
5.  Sum of all elements of a matrix
6.  4×4 matrix: row sums, column sums and diagonal sum

------------------------------------------------------------------------

# PART A --- START FROM ZERO

# 3. What Is Programming?

A computer does not automatically know what you want.

You give it a sequence of instructions.

A **program** is a set of instructions written to solve a problem.

Example problem:

> Add two numbers.

Human thinking:

``` text
Take first number
Take second number
Add them
Show answer
```

C implementation:

``` c
int a, b, sum;

scanf("%d %d", &a, &b);

sum = a + b;

printf("%d", sum);
```

Programming is therefore the process of converting a problem-solving
method into instructions that a computer can execute.

------------------------------------------------------------------------

# 4. Problem-Solving Process

The college material presents programming as a process:

``` text
Understand the problem
        ↓
Design a logical solution
        ↓
Algorithm / Pseudocode
        ↓
Flowchart
        ↓
Write C program
        ↓
Compile
        ↓
Run
        ↓
Test
        ↓
Correct errors
```

## Example

Problem:

> Find the larger of two numbers.

### Input

``` text
X, Y
```

### Processing

``` text
If X > Y
    X is larger
else
    Y is larger
```

### Output

``` text
Larger number
```

------------------------------------------------------------------------

# 5. Algorithm

An **algorithm** is a finite and clear step-by-step procedure for
solving a problem.

## Properties

A good algorithm should have:

1.  Clearly defined steps
2.  Unambiguous instructions
3.  Input
4.  Output
5.  Finite termination
6.  Practical operations

## Example: Sum of two numbers

``` text
Step 1: Start
Step 2: Input A and B
Step 3: SUM = A + B
Step 4: Display SUM
Step 5: Stop
```

## Example: Even or odd

``` text
Step 1: Start
Step 2: Input N
Step 3: If N % 2 == 0, print Even
Step 4: Otherwise print Odd
Step 5: Stop
```

------------------------------------------------------------------------

# 6. Pseudocode

Pseudocode is an informal, English-like way to describe program logic.

Example:

``` text
START
INPUT A, B
SUM = A + B
PRINT SUM
STOP
```

Pseudocode is useful because you can solve the logic **before worrying
about C syntax**.

------------------------------------------------------------------------

# 7. Flowchart

A flowchart is a graphical representation of an algorithm.

## Symbols you should know

  Symbol          Meaning
  --------------- -------------------
  Oval            Start / Stop
  Rectangle       Process
  Parallelogram   Input / Output
  Diamond         Decision
  Arrow           Direction of flow

## Example logic

``` text
       START
         |
      Input N
         |
    N % 2 == 0?
      /      \
    YES       NO
     |         |
   EVEN       ODD
      \       /
       STOP
```

------------------------------------------------------------------------

# 8. Programming Language Levels

Your Unit 1 material discusses four generations.

## 1GL --- Machine Language

Uses binary:

``` text
0 and 1
```

Advantages:

-   Directly understood by CPU
-   Fast
-   No translator required

Disadvantages:

-   Very difficult to write
-   Difficult to debug
-   Machine dependent
-   Not portable

## 2GL --- Assembly Language

Uses mnemonics such as:

``` text
ADD
MUL
CMP
```

An **assembler** translates assembly into machine code.

## 3GL --- High-Level Language

Examples:

``` text
C
C++
Java
FORTRAN
COBOL
BASIC
```

Advantages:

-   Easier for humans
-   More readable
-   More portable
-   Easier to develop

C belongs here.

## 4GL --- Very High-Level Language

Examples discussed in the material include:

``` text
SQL
MATLAB
Python
SAS
```

The focus is often more on **what** is required than on every low-level
step.

------------------------------------------------------------------------

# 9. Programming Paradigms

A programming paradigm is a style or approach to programming.

For this course, remember:

## Procedural Programming

The program is organized as a sequence of procedures/steps.

C is primarily a **procedural, imperative language**.

Example:

``` text
Input
↓
Calculate
↓
Check
↓
Repeat
↓
Output
```

Other paradigms you may be asked about:

-   Object-oriented
-   Functional
-   Logic
-   Procedural

For your C practical exam, **procedural programming is the most
important**.

------------------------------------------------------------------------

# 10. Machine Representation

Computers represent data using binary.

## Bit

A bit is:

``` text
0 or 1
```

## Byte

``` text
1 byte = 8 bits
```

## Binary Example

Convert:

``` text
1101₂
```

to decimal:

``` text
1×2³ + 1×2² + 0×2¹ + 1×2⁰

= 8 + 4 + 0 + 1

= 13
```

So:

``` text
1101₂ = 13₁₀
```

------------------------------------------------------------------------

# PART B --- C FROM ABSOLUTE BEGINNER LEVEL

# 11. What Is C?

C is a general-purpose, procedural, block-structured programming
language.

Important characteristics:

-   Procedural
-   Efficient
-   Portable
-   Structured
-   Relatively small core language
-   Supports low-level operations
-   Widely used in systems and embedded programming

C was developed at Bell Labs in the 1970s by Dennis Ritchie.

------------------------------------------------------------------------

# 12. First C Program

``` c
#include <stdio.h>

int main()
{
    printf("Hello World");
    return 0;
}
```

Understand every line.

### `#include <stdio.h>`

Includes standard input/output declarations.

### `int main()`

The normal starting function of a C program.

### `{ }`

Marks the beginning and end of a block.

### `printf()`

Displays output.

### `return 0;`

Returns zero from `main`, conventionally indicating successful
termination.

### `;`

Most C statements end with a semicolon.

------------------------------------------------------------------------

# 13. Comments

Comments are ignored by the compiler.

## Single-line

``` c
// This is a comment
```

## Multi-line

``` c
/*
   This is
   a comment
*/
```

Use comments to explain code.

------------------------------------------------------------------------

# 14. Header Files

A header file contains declarations needed by C programs.

Most of your beginner programs use:

``` c
#include <stdio.h>
```

It provides declarations for standard I/O functions such as:

``` c
printf()
scanf()
```

Other headers you may see:

``` c
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
```

For Exercises 1--5, `stdio.h` is the most important.

------------------------------------------------------------------------

# 15. Compilation and Execution

A C source file normally has:

``` text
.c
```

extension.

Example:

``` text
program.c
```

A simplified compilation pipeline is:

``` text
Source Code
    ↓
Preprocessor
    ↓
Compiler
    ↓
Assembler
    ↓
Object Code
    ↓
Linker
    ↓
Executable
    ↓
Run
```

## Preprocessor

Handles directives such as:

``` c
#include
#define
```

## Compiler

Translates C source into lower-level/assembly representation and reports
compilation errors.

## Assembler

Converts assembly into object code.

## Linker

Combines object code and required libraries.

## Loader

Loads the executable into memory for execution.

------------------------------------------------------------------------

# 16. Errors You Must Recognize

## Syntax Error

Grammar error.

Wrong:

``` c
printf("Hello")
```

Correct:

``` c
printf("Hello");
```

## Runtime Error

Occurs while running.

Example:

``` text
Division by zero
```

## Logical Error

Program runs but gives the wrong answer.

Wrong average:

``` c
average = a + b / 2;
```

Correct:

``` c
average = (a + b) / 2;
```

------------------------------------------------------------------------

# 17. Variables

A variable is a named storage location whose value can change.

Example:

``` c
int age;
```

Initialize:

``` c
int age = 18;
```

Change:

``` c
age = 19;
```

## Naming rules

Valid:

``` text
age
student_name
marks1
totalMarks
```

Invalid:

``` text
1age
student name
student-name
int
```

C is case-sensitive:

``` text
age
Age
AGE
```

are different identifiers.

------------------------------------------------------------------------

# 18. Data Types

For your exam, know these first:

  Type       Used for                 Example
  ---------- ------------------------ -----------
  `char`     Character                `'A'`
  `int`      Integer                  `25`
  `float`    Decimal                  `12.5f`
  `double`   More precision decimal   `12.5`
  `void`     No value                 Functions

Examples:

``` c
char grade = 'A';
int age = 18;
float percentage = 87.5f;
double pi = 3.1415926535;
```

The exact size of C types depends on the implementation, so do not
memorize one machine-specific size as universal.

------------------------------------------------------------------------

# 19. Constants

A constant is a fixed value.

Examples:

``` c
10
3.14
'A'
"Hello"
```

## `const`

``` c
const float PI = 3.14;
```

The program should not modify `PI` through that identifier.

## `#define`

``` c
#define PI 3.14
```

Then:

``` c
area = PI * r * r;
```

------------------------------------------------------------------------

# 20. Character and String Literals

Character:

``` c
'A'
```

String:

``` c
"ABC"
```

Remember:

``` text
'A'  → one character
"ABC" → string
```

For Exercises 1--5, you mainly need strings when reading/printing a
student's name.

------------------------------------------------------------------------

# 21. `printf()` --- Output

Basic:

``` c
printf("Hello");
```

With variable:

``` c
int age = 18;
printf("%d", age);
```

Common format specifiers:

  Format   Meaning
  -------- -----------------------------------------
  `%d`     `int`
  `%f`     floating-point output
  `%c`     character
  `%s`     string
  `%lf`    commonly used with `scanf` for `double`

Examples:

``` c
printf("%d", 10);
printf("%f", 10.5);
printf("%c", 'A');
printf("%s", "Hello");
```

------------------------------------------------------------------------

# 22. Escape Sequences

Important:

``` text
\n → new line
\t → tab
\\ → backslash
\" → double quote
```

Example:

``` c
printf("Hello\nWorld");
```

Output:

``` text
Hello
World
```

------------------------------------------------------------------------

# 23. `scanf()` --- Input

Example:

``` c
int age;

scanf("%d", &age);
```

The `&` gives the address of the variable to `scanf`.

Multiple inputs:

``` c
int a, b;

scanf("%d %d", &a, &b);
```

For a string stored in a character array:

``` c
char name[50];

scanf("%49s", name);
```

------------------------------------------------------------------------

# 24. Arithmetic Operators

  Operator   Meaning
  ---------- ----------------
  `+`        Addition
  `-`        Subtraction
  `*`        Multiplication
  `/`        Division
  `%`        Remainder

Example:

``` c
int a = 10, b = 3;

a + b   // 13
a - b   // 7
a * b   // 30
a / b   // 3
a % b   // 1
```

## Very important: integer division

``` c
5 / 2
```

gives:

``` text
2
```

because both operands are integers.

To get decimal division:

``` c
(float)5 / 2
```

or:

``` c
5.0 / 2
```

------------------------------------------------------------------------

# 25. Relational Operators

Used for comparison:

``` text
<   >   <=   >=   ==   !=
```

Example:

``` c
if (a > b)
```

The condition becomes true or false.

------------------------------------------------------------------------

# 26. Logical Operators

``` text
&& → AND
|| → OR
!  → NOT
```

Example:

``` c
if (age >= 18 && age <= 60)
```

Both conditions must be true.

------------------------------------------------------------------------

# 27. Assignment Operators

Basic:

``` c
=
```

Compound:

``` text
+=
-=
*=
/=
%=
```

Example:

``` c
x += 5;
```

means:

``` c
x = x + 5;
```

------------------------------------------------------------------------

# 28. Increment and Decrement

``` text
++ → increment by 1
-- → decrement by 1
```

## Post-increment

``` c
x++;
```

Use old value, then increase.

## Pre-increment

``` c
++x;
```

Increase first, then use value.

Example:

``` c
int x = 5;
int y = x++;
```

After this:

``` text
y = 5
x = 6
```

------------------------------------------------------------------------

# 29. Conditional Operator

Syntax:

``` c
condition ? value1 : value2;
```

Example:

``` c
max = (a > b) ? a : b;
```

------------------------------------------------------------------------

# 30. Expressions

An expression combines values, variables and operators to produce a
value.

Examples:

``` c
a + b
a * b + 10
(a + b) / 2
```

Assignment:

``` c
sum = a + b;
```

The right side is evaluated and assigned to the left-side variable.

------------------------------------------------------------------------

# 31. Precedence and Associativity

Do not blindly calculate left-to-right.

Example:

``` c
int x = 2 + 3 * 4;
```

Multiplication happens first:

``` text
2 + (3 × 4)
= 14
```

Parentheses:

``` c
int x = (2 + 3) * 4;
```

gives:

``` text
20
```

### Practical precedence order

``` text
()
unary operators
* / %
+ -
< <= > >=
== !=
&&
||
?:
assignment
```

When confused, use parentheses.

------------------------------------------------------------------------

# 32. Type Conversion

## Implicit conversion

C automatically converts compatible values when required.

Example:

``` c
int a = 5;
double b = 2.0;

double result = a / b;
```

## Explicit conversion

You force conversion:

``` c
float result = (float)a / b;
```

Syntax:

``` c
(type) expression
```

### Exam favorite

``` c
int a = 5;
int b = 2;

float x = a / b;
```

Result:

``` text
2.000000
```

because integer division occurs first.

Correct:

``` c
float x = (float)a / b;
```

Result:

``` text
2.500000
```

------------------------------------------------------------------------

# 33. `if`

Syntax:

``` c
if (condition)
{
    statements;
}
```

Example:

``` c
if (n > 0)
{
    printf("Positive");
}
```

------------------------------------------------------------------------

# 34. `if-else`

``` c
if (condition)
{
    statements;
}
else
{
    statements;
}
```

Example:

``` c
if (n % 2 == 0)
{
    printf("Even");
}
else
{
    printf("Odd");
}
```

------------------------------------------------------------------------

# 35. `else-if` Ladder

Used for multiple ranges.

``` c
if (percentage >= 60)
{
    printf("First Division");
}
else if (percentage >= 50)
{
    printf("Second Division");
}
else if (percentage >= 40)
{
    printf("Third Division");
}
else
{
    printf("Fail");
}
```

The first true condition executes.

------------------------------------------------------------------------

# 36. Nested `if`

An `if` inside another `if`.

Example:

``` c
if (a > b)
{
    if (a > c)
        printf("A is largest");
}
```

For maximum of three, a cleaner beginner approach is:

``` c
if (a > b)
{
    if (a > c)
        max = a;
    else
        max = c;
}
else
{
    if (b > c)
        max = b;
    else
        max = c;
}
```

------------------------------------------------------------------------

# 37. `switch`

Useful for menu-like choices.

``` c
switch (choice)
{
    case 1:
        printf("Add");
        break;

    case 2:
        printf("Subtract");
        break;

    default:
        printf("Invalid");
}
```

## Why `break`?

Without it, execution can fall into the next case.

------------------------------------------------------------------------

# 38. Loops

A loop repeats statements.

Three loops:

``` text
for
while
do-while
```

------------------------------------------------------------------------

# 39. `for` Loop

Syntax:

``` c
for (initialization; condition; update)
{
    statements;
}
```

Example:

``` c
for (int i = 1; i <= 5; i++)
{
    printf("%d ", i);
}
```

Output:

``` text
1 2 3 4 5
```

------------------------------------------------------------------------

# 40. `while` Loop

``` c
while (condition)
{
    statements;
}
```

Example:

``` c
int i = 1;

while (i <= 5)
{
    printf("%d ", i);
    i++;
}
```

------------------------------------------------------------------------

# 41. `do-while` Loop

``` c
do
{
    statements;
}
while (condition);
```

The body executes at least once.

Example:

``` c
int i = 1;

do
{
    printf("%d ", i);
    i++;
}
while (i <= 5);
```

------------------------------------------------------------------------

# 42. Loop Comparison

  -----------------------------------------------------------------------
  `for`                   `while`                 `do-while`
  ----------------------- ----------------------- -----------------------
  Initialization,         Condition-controlled    Body executes before
  condition, update in                            condition
  one place                                       

  Good for counting       Good for conditions     Good when at least one
                                                  execution is required

  May execute 0 times     May execute 0 times     Executes at least once
  -----------------------------------------------------------------------

------------------------------------------------------------------------

# 43. Nested Loops

A loop inside another loop.

Example:

``` c
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        printf("* ");
    }

    printf("\n");
}
```

Output:

``` text
* * *
* * *
* * *
```

The inner loop completes for every outer-loop iteration.

------------------------------------------------------------------------

# 44. `break`, `continue`, `goto`

## `break`

Stops the nearest loop/switch.

``` c
if (i == 5)
    break;
```

## `continue`

Skips the current loop iteration.

``` c
if (i == 3)
    continue;
```

## `goto`

Jumps to a label.

``` c
goto start;

start:
printf("Hello");
```

For normal exam programs, prefer structured `if` and loops rather than
unnecessary `goto`.

------------------------------------------------------------------------

# PART C --- CORE PROGRAMMING PATTERNS

# 45. Pattern 1: Formula Program

General structure:

``` c
#include <stdio.h>

int main()
{
    // variables

    // input

    // formula

    // output

    return 0;
}
```

Example:

``` c
float si;

si = (p * r * t) / 100.0;
```

------------------------------------------------------------------------

# 46. Pattern 2: Decision Program

``` c
if (condition)
{
    ...
}
else
{
    ...
}
```

------------------------------------------------------------------------

# 47. Pattern 3: Repetition

``` c
for (int i = 1; i <= n; i++)
{
    ...
}
```

------------------------------------------------------------------------

# 48. Pattern 4: Digit Processing

This is extremely important for:

-   Reverse
-   Palindrome
-   Armstrong
-   Sum of digits

The basic technique:

``` c
digit = n % 10;
n = n / 10;
```

Example:

``` text
n = 123

digit = 123 % 10 = 3
n = 123 / 10 = 12

digit = 12 % 10 = 2
n = 12 / 10 = 1

digit = 1 % 10 = 1
n = 1 / 10 = 0
```

------------------------------------------------------------------------

# 49. Pattern 5: Array Processing

For a 1D array:

``` c
for (int i = 0; i < n; i++)
{
    // use a[i]
}
```

For a matrix:

``` c
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        // use a[i][j]
    }
}
```

Memorize these two loop shapes.

------------------------------------------------------------------------

# PART D --- EXERCISE 1

# 50. Exercise 1 --- Basic C Programs

## E1-Q1. Hello World

``` c
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
```

### Understand

`printf()` displays the message.

------------------------------------------------------------------------

## E1-Q2. Print Student Name

``` c
#include <stdio.h>

int main()
{
    printf("Nayan Thakkar");

    return 0;
}
```

Replace the name with your own.

------------------------------------------------------------------------

## E1-Q3. Print Multiple Lines

``` c
#include <stdio.h>

int main()
{
    printf("Name: Nayan\n");
    printf("Roll No: 101\n");
    printf("Course: C Programming\n");

    return 0;
}
```

`\n` moves output to the next line.

------------------------------------------------------------------------

## E1-Q4. Enter Value and Print

``` c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("You entered: %d", n);

    return 0;
}
```

### Core concept

``` text
declare → input → output
```

------------------------------------------------------------------------

# PART E --- EXERCISE 2

# 51. Exercise 2 --- Data Types, Operators and Expressions

# E2-Q1. Interchange Two Variables

## Method 1 --- Using third variable

``` c
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
```

### Logic

``` text
temp = a
a = b
b = temp
```

This is the safest method for beginners.

## Method 2 --- Without third variable

``` c
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
```

The third-variable method is easier to understand and avoids arithmetic
overflow concerns.

------------------------------------------------------------------------

# E2-Q2. Simple Interest

Formula:

``` text
SI = (P × R × T) / 100
```

Program:

``` c
#include <stdio.h>

int main()
{
    float p, r, t, si;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100.0f;

    printf("Simple Interest = %.2f", si);

    return 0;
}
```

------------------------------------------------------------------------

# E2-Q3. Addition, Subtraction, Multiplication and Division

``` c
#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);

    if (b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}
```

### Exam note

If using integers:

``` c
a / b
```

performs integer division.

------------------------------------------------------------------------

# E2-Q4. Student Name, Roll No, Three Marks and Percentage

Assume each subject is out of 100.

``` c
#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, percentage;

    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    percentage = (m1 + m2 + m3) / 3.0f;

    printf("\nName: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
```

### Why average works as percentage here

Each subject is out of 100.

``` text
Total obtained / 300 × 100
```

which is mathematically equal to:

``` text
(m1 + m2 + m3) / 3
```

------------------------------------------------------------------------

# E2-Q5. Volume of Cube

College values:

``` text
h = 10 cm
w = 12 cm
d = 8 cm
```

Formula:

``` text
Volume = h × w × d
```

Program:

``` c
#include <stdio.h>

int main()
{
    int h = 10;
    int w = 12;
    int d = 8;
    int volume;

    volume = h * w * d;

    printf("Volume of cube = %d cubic cm", volume);

    return 0;
}
```

Output:

``` text
Volume of cube = 960 cubic cm
```

------------------------------------------------------------------------

# E2-Q6. Gross Salary

Given:

``` text
DA = 5% of basic
HRA = 10% of basic

Gross = Basic + DA + HRA
```

``` c
#include <stdio.h>

int main()
{
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.05f * basic;
    hra = 0.10f * basic;

    gross = basic + da + hra;

    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
```

------------------------------------------------------------------------

# E2-Q7. Employee ID, Hours and Hourly Salary

``` c
#include <stdio.h>

int main()
{
    int id;
    float hours, rate, salary;

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter total worked hours: ");
    scanf("%f", &hours);

    printf("Enter amount per hour: ");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Employee ID: %d\n", id);
    printf("Salary: %.2f\n", salary);

    return 0;
}
```

### Core formula

``` text
Salary = hours × rate
```

------------------------------------------------------------------------

# E2-Q8. Average of Three Numbers

``` c
#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3.0f;

    printf("Average = %.2f", average);

    return 0;
}
```

### Common mistake

Wrong:

``` c
average = a + b + c / 3;
```

Correct:

``` c
average = (a + b + c) / 3.0f;
```

------------------------------------------------------------------------

# PART F --- EXERCISE 3

# 52. Exercise 3 --- Decision Statements

# E3-Q1. Even or Odd

Logic:

``` text
If n % 2 == 0 → Even
Else → Odd
```

``` c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q2. Maximum Between Two Numbers

``` c
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);

    return 0;
}
```

If equal values occur, either can correctly be reported as a maximum.

------------------------------------------------------------------------

# E3-Q3. Divisible by 5 and 11

Both conditions must be true:

``` c
n % 5 == 0 && n % 11 == 0
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
        printf("Divisible by both 5 and 11");
    else
        printf("Not divisible by both 5 and 11");

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q4. Positive, Negative or Zero

``` c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q5. Weekday Using Switch

Assume:

``` text
1 = Monday
2 = Tuesday
...
7 = Sunday
```

``` c
#include <stdio.h>

int main()
{
    int day;

    printf("Enter week number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q6. Month Number and Number of Days

A basic version:

``` c
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
            printf("31 days");
            break;

        case 2:
            printf("28 or 29 days");
            break;

        case 3:
            printf("31 days");
            break;

        case 4:
            printf("30 days");
            break;

        case 5:
            printf("31 days");
            break;

        case 6:
            printf("30 days");
            break;

        case 7:
            printf("31 days");
            break;

        case 8:
            printf("31 days");
            break;

        case 9:
            printf("30 days");
            break;

        case 10:
            printf("31 days");
            break;

        case 11:
            printf("30 days");
            break;

        case 12:
            printf("31 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}
```

If the question asks to consider leap years, February needs an
additional year input and condition.

------------------------------------------------------------------------

# E3-Q7. Maximum of Three Using Nested If-Else

``` c
#include <stdio.h>

int main()
{
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
    }

    printf("Maximum = %d", max);

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q8. Simple Calculator Using Switch

``` c
#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression like 10 + 5: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
```

------------------------------------------------------------------------

# E3-Q9. Student Division --- If-Else-If Ladder

Given:

``` text
>= 60 → First
50–59 → Second
40–49 → Third
< 40 → Fail
```

``` c
#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, percentage;

    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5.0f;

    if (percentage >= 60)
        printf("First Division");
    else if (percentage >= 50)
        printf("Second Division");
    else if (percentage >= 40)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}
```

### Important

Because conditions are checked from top to bottom, you do not need:

``` c
percentage >= 50 && percentage < 60
```

after the first condition has already failed.

------------------------------------------------------------------------

# E3-Q10. Employee Gross Salary --- Conditional Rules

Given:

``` text
Basic < 1500:
HRA = 10% basic
DA  = 90% basic

Basic >= 1500:
HRA = 500
DA  = 98% basic
```

``` c
#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic < 1500)
    {
        hra = 0.10f * basic;
        da = 0.90f * basic;
    }
    else
    {
        hra = 500;
        da = 0.98f * basic;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
```

------------------------------------------------------------------------

# PART G --- EXERCISE 4

# 53. Exercise 4 --- Loops and Nested Loops

# E4-Q1. Sum of First N Natural Numbers

Natural numbers here are treated as:

``` text
1, 2, 3, ..., N
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
```

Example:

``` text
N = 5

sum = 1 + 2 + 3 + 4 + 5
    = 15
```

------------------------------------------------------------------------

# E4-Q2. Factorial

Definition:

``` text
5! = 5 × 4 × 3 × 2 × 1
   = 120
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n;
    long long fact = 1;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative integers");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial = %lld", fact);
    }

    return 0;
}
```

Remember:

``` text
0! = 1
```

------------------------------------------------------------------------

# E4-Q3. Fibonacci Series

Your college hint starts:

``` text
1 1 2 3 5 8 13
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n;
    long long a = 1, b = 1, c;

    scanf("%d", &n);

    if (n >= 1)
        printf("%lld ", a);

    if (n >= 2)
        printf("%lld ", b);

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%lld ", c);

        a = b;
        b = c;
    }

    return 0;
}
```

### Logic

``` text
a = 1
b = 1

c = a + b

then shift:
a = b
b = c
```

------------------------------------------------------------------------

# E4-Q4. Palindrome Number

A palindrome reads the same forward and backward.

Examples:

``` text
121 → palindrome
1331 → palindrome
123 → not palindrome
```

Algorithm:

``` text
Store original number
Reverse the number
Compare original and reverse
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n, original, reverse = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
```

------------------------------------------------------------------------

# E4-Q5. Multiplication Table

Example:

``` text
29 * 1 = 29
29 * 2 = 58
...
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
```

------------------------------------------------------------------------

# E4-Q6. Armstrong Number

For a 3-digit Armstrong number:

``` text
153 = 1³ + 5³ + 3³
    = 1 + 125 + 27
    = 153
```

A robust general solution can count digits and raise each digit to that
count.

``` c
#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, temp, digits = 0;
    int digit;
    double sum = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not an Armstrong number");
        return 0;
    }

    original = n;
    temp = n;

    if (temp == 0)
        digits = 1;
    else
    {
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }
    }

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
```

### Important exam note

If your teacher specifically teaches Armstrong as a **3-digit** problem,
they may expect the simpler:

``` c
sum = sum + digit * digit * digit;
```

version.

------------------------------------------------------------------------

# E4-Q7. Reverse Digits

``` c
#include <stdio.h>

int main()
{
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
```

### Dry run for 123

``` text
digit = 3 → reverse = 3
digit = 2 → reverse = 32
digit = 1 → reverse = 321
```

------------------------------------------------------------------------

# E4-Q8. Patterns

The key to patterns is:

``` text
Outer loop → rows
Inner loop → what is printed in each row
```

------------------------------------------------------------------------

## Pattern A --- Increasing Triangle

Required:

``` text
*
* *
* * *
* * * *
* * * * *
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

------------------------------------------------------------------------

## Pattern B --- Centered Pyramid

Example:

``` text
    *
   ***
  *****
 *******
*********
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
```

------------------------------------------------------------------------

## Pattern C --- Diamond

``` text
    *
   ***
  *****
 *******
  *****
   ***
    *
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
```

------------------------------------------------------------------------

## Pattern D --- Number Triangle

``` text
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n = 5;
    int value = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", value);
            value++;
        }

        printf("\n");
    }

    return 0;
}
```

------------------------------------------------------------------------

## Pattern E --- Pascal's Triangle

College list includes:

``` text
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

Program:

``` c
#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int value = 1;

        for (int s = 0; s < n - i - 1; s++)
            printf(" ");

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
```

------------------------------------------------------------------------

# PART H --- EXERCISE 5

# 54. Exercise 5 --- Arrays

# 54.1 What Is an Array?

An array stores multiple values of the **same data type** under one
name.

Example:

``` c
int marks[5];
```

It stores five integers.

Indexes:

``` text
marks[0]
marks[1]
marks[2]
marks[3]
marks[4]
```

Important:

> **C array indexing starts from 0.**

For size `n`, valid indexes are:

``` text
0 to n-1
```

------------------------------------------------------------------------

# 55. Array Declaration

Syntax:

``` c
data_type array_name[size];
```

Examples:

``` c
int a[10];
float marks[5];
char name[20];
```

------------------------------------------------------------------------

# 56. Array Initialization

``` c
int a[5] = {10, 20, 30, 40, 50};
```

Size can be inferred:

``` c
int a[] = {10, 20, 30, 40, 50};
```

Partial initialization:

``` c
int a[5] = {10, 20};
```

The remaining elements are initialized to zero.

------------------------------------------------------------------------

# 57. Reading an Array

``` c
for (int i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
```

Notice:

``` c
&a[i]
```

because `scanf()` needs the address of the element.

------------------------------------------------------------------------

# 58. Printing an Array

``` c
for (int i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}
```

------------------------------------------------------------------------

# E5-Q1. Read and Display N Numbers

``` c
#include <stdio.h>

int main()
{
    int n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
```

### Important

If the array is declared as:

``` c
int a[100];
```

do not allow the user to enter more than 100 elements.

------------------------------------------------------------------------

# E5-Q2. Sum of 10 Array Numbers

``` c
#include <stdio.h>

int main()
{
    int a[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
```

### Core idea

``` text
sum starts at 0
↓
read each element
↓
add it to sum
```

------------------------------------------------------------------------

# E5-Q3. Maximum and Minimum of 5 Numbers

``` c
#include <stdio.h>

int main()
{
    int a[5];
    int max, min;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
```

### Very important

Do not initialize:

``` c
max = 0;
```

if negative values are possible.

Instead:

``` c
max = a[0];
```

------------------------------------------------------------------------

# E5-Q4. Marks of 5 Students × 3 Subjects

Requirement:

-   Accept marks for 3 subjects
-   For 5 students
-   Calculate percentage of each student
-   Highest marks in each subject
-   Average marks in each subject

This is a **2D array** problem.

``` c
#include <stdio.h>

int main()
{
    float marks[5][3];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for student %d:\n", i + 1);

        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &marks[i][j]);
        }
    }

    printf("\nStudent percentages:\n");

    for (int i = 0; i < 5; i++)
    {
        float total = 0;

        for (int j = 0; j < 3; j++)
        {
            total += marks[i][j];
        }

        printf("Student %d = %.2f%%\n", i + 1, total / 3.0f);
    }

    printf("\nHighest marks in each subject:\n");

    for (int j = 0; j < 3; j++)
    {
        float highest = marks[0][j];

        for (int i = 1; i < 5; i++)
        {
            if (marks[i][j] > highest)
                highest = marks[i][j];
        }

        printf("Subject %d = %.2f\n", j + 1, highest);
    }

    printf("\nAverage marks in each subject:\n");

    for (int j = 0; j < 3; j++)
    {
        float sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += marks[i][j];
        }

        printf("Subject %d = %.2f\n", j + 1, sum / 5.0f);
    }

    return 0;
}
```

## Understand the indexing

``` text
marks[student][subject]
```

For example:

``` c
marks[2][1]
```

means:

``` text
3rd student
2nd subject
```

because indexing starts at zero.

------------------------------------------------------------------------

# 59. Two-Dimensional Arrays

Syntax:

``` c
int matrix[rows][columns];
```

Example:

``` c
int matrix[3][4];
```

means:

``` text
3 rows
4 columns
12 elements
```

Access:

``` c
matrix[i][j]
```

------------------------------------------------------------------------

# 60. The Golden Matrix Loop

Memorize this:

``` c
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        scanf("%d", &matrix[i][j]);
    }
}
```

Printing:

``` c
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d ", matrix[i][j]);
    }

    printf("\n");
}
```

------------------------------------------------------------------------

# E5-Q5. Sum of All Elements of a Matrix

``` c
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[20][20];
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
```

------------------------------------------------------------------------

# E5-Q6. 4×4 Matrix --- Row Sum, Column Sum, Diagonal Sum

Requirement:

-   Enter 4×4 matrix
-   Sum of each row
-   Sum of each column
-   Sum of diagonal elements

``` c
#include <stdio.h>

int main()
{
    int a[4][4];

    printf("Enter 4 x 4 matrix:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow sums:\n");

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn sums:\n");

    for (int j = 0; j < 4; j++)
    {
        int sum = 0;

        for (int i = 0; i < 4; i++)
        {
            sum += a[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    int diagonalSum = 0;

    for (int i = 0; i < 4; i++)
    {
        diagonalSum += a[i][i];
    }

    printf("\nMain diagonal sum = %d\n", diagonalSum);

    return 0;
}
```

### Main diagonal

For a square matrix:

``` text
a[0][0]
a[1][1]
a[2][2]
a[3][3]
```

So the condition is:

``` c
i == j
```

------------------------------------------------------------------------

# 61. Matrix Example for Dry Run

Consider:

``` text
1  2  3
4  5  6
7  8  9
```

Main diagonal:

``` text
1 + 5 + 9 = 15
```

Row sums:

``` text
Row 1 = 1 + 2 + 3 = 6
Row 2 = 4 + 5 + 6 = 15
Row 3 = 7 + 8 + 9 = 24
```

Column sums:

``` text
Column 1 = 1 + 4 + 7 = 12
Column 2 = 2 + 5 + 8 = 15
Column 3 = 3 + 6 + 9 = 18
```

------------------------------------------------------------------------

# PART I --- HOW TO SOLVE UNSEEN EXAM PROGRAMS

# 62. Do Not Memorize the Exact Question

Your examiner can change:

``` text
"Find sum of 10 numbers"
```

to:

``` text
"Find sum of N numbers"
```

The logic remains:

``` c
sum = 0;

for (i = 0; i < n; i++)
{
    sum += a[i];
}
```

Learn the **pattern**, not just the answer.

------------------------------------------------------------------------

# 63. Identify the Required Tool

### Example

> Check whether number is even.

Think:

``` text
condition
↓
if
↓
%
```

### Example

> Print first N numbers.

Think:

``` text
repeat
↓
for
```

### Example

> Reverse number.

Think:

``` text
digits
↓
% 10
↓
/ 10
↓
while
```

### Example

> Print pyramid.

Think:

``` text
rows
↓
nested loops
↓
spaces + stars
```

### Example

> Find maximum in 10 values.

Think:

``` text
array
↓
loop
↓
max
```

### Example

> Matrix sum.

Think:

``` text
2D array
↓
nested loops
```

------------------------------------------------------------------------

# 64. Universal Exam Program Structure

Use this template:

``` c
#include <stdio.h>

int main()
{
    // 1. Declare variables

    // 2. Take input

    // 3. Process / calculate

    // 4. Display output

    return 0;
}
```

For every question, fill these four parts.

------------------------------------------------------------------------

# 65. Dry Run Technique

Suppose:

``` c
int sum = 0;

for (int i = 1; i <= 5; i++)
{
    sum = sum + i;
}
```

Make a table:

    i   sum before   sum after
  --- ------------ -----------
    1            0           1
    2            1           3
    3            3           6
    4            6          10
    5           10          15

Final:

``` text
sum = 15
```

This technique is extremely useful for debugging and output questions.

------------------------------------------------------------------------

# PART J --- MOST IMPORTANT C MISTAKES

# 66. `=` vs `==`

Wrong:

``` c
if (a = 5)
```

Usually intended:

``` c
if (a == 5)
```

Remember:

``` text
=  → assign
== → compare
```

------------------------------------------------------------------------

# 67. Forgetting `&` in `scanf`

Wrong:

``` c
scanf("%d", x);
```

Correct:

``` c
scanf("%d", &x);
```

For a character array used as a string:

``` c
scanf("%49s", name);
```

do not write `&name`.

------------------------------------------------------------------------

# 68. Array Boundary Error

If:

``` c
int a[5];
```

valid:

``` text
a[0]
a[1]
a[2]
a[3]
a[4]
```

Invalid:

``` c
a[5]
```

------------------------------------------------------------------------

# 69. Wrong Loop Condition

Wrong:

``` c
for (i = 0; i <= 10; i++)
```

for an array of size 10.

Correct:

``` c
for (i = 0; i < 10; i++)
```

------------------------------------------------------------------------

# 70. Missing `break` in Switch

Wrong:

``` c
case 1:
    printf("One");

case 2:
    printf("Two");
```

This may execute both cases.

Usually write:

``` c
case 1:
    printf("One");
    break;
```

------------------------------------------------------------------------

# 71. Forgetting to Update a While Loop

Danger:

``` c
while (i <= 10)
{
    printf("%d", i);
}
```

`i` never changes, so the loop may never end.

Correct:

``` c
while (i <= 10)
{
    printf("%d", i);
    i++;
}
```

------------------------------------------------------------------------

# 72. Integer Division

Wrong when decimal result is needed:

``` c
float avg = sum / 3;
```

if `sum` is an integer.

Better:

``` c
float avg = sum / 3.0f;
```

------------------------------------------------------------------------

# 73. Wrong Initialization

For sum:

``` c
int sum = 0;
```

For product/factorial:

``` c
int fact = 1;
```

For maximum/minimum of an input array:

``` c
max = a[0];
min = a[0];
```

------------------------------------------------------------------------

# 74. Missing Parentheses

Wrong:

``` c
average = a + b + c / 3;
```

Correct:

``` c
average = (a + b + c) / 3.0f;
```

------------------------------------------------------------------------

# PART K --- EXAM QUESTION BANK

# 75. Basic Theory Questions

Prepare short answers for:

1.  What is a program?
2.  What is an algorithm?
3.  What is pseudocode?
4.  What is a flowchart?
5.  List flowchart symbols.
6.  What is machine language?
7.  What is assembly language?
8.  What is a high-level language?
9.  What is procedural programming?
10. What is C?
11. Who developed C?
12. What is a compiler?
13. What is an interpreter?
14. What is an assembler?
15. What is a linker?
16. What is a loader?
17. What is a variable?
18. What is a constant?
19. What is a data type?
20. What is an operator?
21. What is an expression?
22. What is type conversion?
23. What is operator precedence?
24. What is associativity?
25. What is an array?

------------------------------------------------------------------------

# 76. Very Important Differences

## Compiler vs Interpreter

  -----------------------------------------------------------------------
  Compiler                            Interpreter
  ----------------------------------- -----------------------------------
  Translates program before execution Interprets/translates incrementally
  in the traditional model            

  Compilation reports errors before   Errors can appear as execution
  normal execution                    reaches affected code

  Commonly produces object/executable Usually does not produce a
  output                              standalone executable in the same
                                      way

  C is traditionally compiled         Many scripting languages use
                                      interpretation/bytecode execution
  -----------------------------------------------------------------------

## `for` vs `while`

  -----------------------------------------------------------------------
  `for`                               `while`
  ----------------------------------- -----------------------------------
  Initialization, condition and       Condition is the main loop header
  update are grouped                  

  Excellent for counting              Excellent for condition-controlled
                                      repetition
  -----------------------------------------------------------------------

## `while` vs `do-while`

``` text
while → condition first
do-while → body first
```

## `break` vs `continue`

``` text
break → leave loop
continue → skip current iteration
```

## Variable vs Constant

``` text
Variable → value can change
Constant → intended fixed value
```

------------------------------------------------------------------------

# 77. Most Likely Programming Questions

Based on the syllabus and the college practical list, practice these
until you can write them without looking:

### Absolute must-do

-   Hello World
-   Input/output
-   Swap
-   Simple interest
-   Arithmetic calculator
-   Student percentage
-   Even/odd
-   Maximum of two
-   Positive/negative/zero
-   Weekday switch
-   Month days switch
-   Maximum of three
-   Calculator switch
-   Division using ladder
-   Gross salary
-   Sum of N
-   Factorial
-   Fibonacci
-   Palindrome
-   Multiplication table
-   Reverse number
-   Armstrong
-   Star triangle
-   Pyramid
-   Diamond
-   Number triangle
-   Pascal triangle
-   Array input/output
-   Array sum
-   Array max/min
-   2D marks
-   Matrix sum
-   Matrix row/column/diagonal sums

------------------------------------------------------------------------

# 78. Practice Without Looking

For each problem, first write only:

``` text
INPUT:
PROCESS:
OUTPUT:
```

Then write the algorithm.

Then write C.

Then test with an example.

Example:

## Problem

> Find whether a number is even or odd.

### Input

``` text
n
```

### Process

``` text
n % 2
```

### Decision

``` text
if remainder == 0
```

### Output

``` text
Even / Odd
```

Now code.

This is how a beginner becomes independent instead of copying programs.

------------------------------------------------------------------------

# PART L --- FINAL PRACTICE SET

# 79. Practice Round 1 --- Basics

Write without notes:

1.  Hello World
2.  Print your name
3.  Print three lines
4.  Input an integer and print it
5.  Input two integers and print their sum
6.  Input two numbers and print all arithmetic operations
7.  Calculate average of three numbers
8.  Calculate simple interest
9.  Calculate cube volume
10. Calculate gross salary

------------------------------------------------------------------------

# 80. Practice Round 2 --- Conditions

1.  Even/odd
2.  Positive/negative/zero
3.  Maximum of two
4.  Maximum of three
5.  Divisible by 5 and 11
6.  Weekday using switch
7.  Month days using switch
8.  Calculator using switch
9.  Student division
10. Employee gross salary

------------------------------------------------------------------------

# 81. Practice Round 3 --- Loops

1.  Print 1 to N
2.  Print N to 1
3.  Sum 1 to N
4.  Factorial
5.  Multiplication table
6.  Fibonacci
7.  Reverse number
8.  Palindrome
9.  Armstrong
10. Count digits
11. Sum of digits
12. Star triangle
13. Pyramid
14. Diamond
15. Number triangle
16. Pascal triangle

------------------------------------------------------------------------

# 82. Practice Round 4 --- Arrays

1.  Read N values
2.  Display N values
3.  Sum array
4.  Average array
5.  Maximum
6.  Minimum
7.  Maximum and minimum together
8.  Count even/odd elements
9.  Reverse an array
10. 2D matrix input/output
11. Matrix total sum
12. Row sums
13. Column sums
14. Main diagonal sum
15. 5 students × 3 subjects

------------------------------------------------------------------------

# 83. Final 20-Minute Revision Sheet

``` text
C PROGRAM:

#include <stdio.h>

int main()
{
    // declarations
    // input
    // processing
    // output

    return 0;
}
```

### Input/output

``` c
scanf("%d", &x);
printf("%d", x);
```

### Conditions

``` c
if (condition)
{
}
else
{
}
```

### Multiple conditions

``` c
if (...)
{
}
else if (...)
{
}
else
{
}
```

### Switch

``` c
switch (x)
{
    case 1:
        ...
        break;

    default:
        ...
}
```

### For loop

``` c
for (int i = 0; i < n; i++)
{
}
```

### While

``` c
while (condition)
{
}
```

### Do-while

``` c
do
{
}
while (condition);
```

### Digit extraction

``` c
digit = n % 10;
n = n / 10;
```

### Array

``` c
int a[100];

for (int i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
```

### Matrix

``` c
int a[10][10];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        scanf("%d", &a[i][j]);
    }
}
```

------------------------------------------------------------------------

# 84. The Five Rules You Should Never Forget

## Rule 1

``` text
=  means assignment
== means comparison
```

## Rule 2

``` text
Array starts from index 0.
```

## Rule 3

``` text
sum = 0
fact = 1
```

## Rule 4

For digit problems:

``` text
digit = n % 10
n = n / 10
```

## Rule 5

For matrix problems:

``` text
outer loop = rows
inner loop = columns
```

------------------------------------------------------------------------

# 85. Final Exam Checklist

Before the exam, confirm that you can write from memory:

-   [ ] Basic C program structure
-   [ ] `#include <stdio.h>`
-   [ ] `main()`
-   [ ] `printf`
-   [ ] `scanf`
-   [ ] `%d`, `%f`, `%c`, `%s`
-   [ ] Variables
-   [ ] Data types
-   [ ] Constants
-   [ ] Arithmetic operators
-   [ ] Relational operators
-   [ ] Logical operators
-   [ ] Assignment operators
-   [ ] Increment/decrement
-   [ ] Type conversion
-   [ ] Precedence
-   [ ] `if`
-   [ ] `if-else`
-   [ ] `else-if`
-   [ ] Nested `if`
-   [ ] `switch`
-   [ ] `for`
-   [ ] `while`
-   [ ] `do-while`
-   [ ] Nested loops
-   [ ] `break`
-   [ ] `continue`
-   [ ] `goto`
-   [ ] Digit extraction
-   [ ] Sum of N
-   [ ] Factorial
-   [ ] Fibonacci
-   [ ] Palindrome
-   [ ] Reverse
-   [ ] Armstrong
-   [ ] Star patterns
-   [ ] Number patterns
-   [ ] Array declaration
-   [ ] Array initialization
-   [ ] 1D array input/output
-   [ ] Array sum
-   [ ] Array max/min
-   [ ] 2D array
-   [ ] Matrix input/output
-   [ ] Matrix sum
-   [ ] Row sum
-   [ ] Column sum
-   [ ] Diagonal sum

------------------------------------------------------------------------

# 86. One Last Strategy for a Beginner

If you have **zero programming experience**, use this order:

### Day 1

Learn:

``` text
printf
scanf
variables
data types
operators
```

Write:

``` text
Hello
Input/output
Sum
Average
Simple interest
```

### Day 2

Learn:

``` text
if
if-else
else-if
switch
```

Write all Exercise 3 programs.

### Day 3

Learn:

``` text
for
while
do-while
```

Write:

``` text
sum
factorial
Fibonacci
reverse
palindrome
table
```

### Day 4

Learn:

``` text
nested loops
```

Practice all patterns.

### Day 5

Learn:

``` text
arrays
2D arrays
```

Practice all Exercise 5 programs.

### Final revision

Do not reread everything.

Instead, take blank paper and write programs from memory.

The goal is:

``` text
QUESTION
   ↓
Identify concept
   ↓
Write logic
   ↓
Write C syntax
   ↓
Compile mentally
   ↓
Check output
```

That is the skill your C programming exam is testing.

------------------------------------------------------------------------

# 87. Scope Note

This guide deliberately **ends practical preparation at Exercise 5
(Arrays)**.

The later practical exercises involving:

-   Functions
-   Recursion
-   Strings
-   Pointers
-   File operations
-   Structures
-   Unions

are excluded from the final practical practice section as requested.

The theory sections are included only to make the C programs
understandable and to cover the supplied syllabus.
