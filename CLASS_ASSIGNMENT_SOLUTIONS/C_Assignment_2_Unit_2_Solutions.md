# Computer Programming --- Assignment 2 (Unit 2)

## Questions + Beginner-Friendly Solutions

**Source:** College-provided Assignment 2 (Unit 2). The question order
follows the supplied assignment.

# Questions 1--40

## 1. Discuss the structure of a C program.

``` c
#include <stdio.h>
#define PI 3.14

int main(void)
{
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);
    return 0;
}
```

Parts: comments/documentation, preprocessor directives, macros, global
declarations if required, `main()`, local declarations, executable
statements and `return`.

## 2. Identifiers and keywords

An **identifier** is a programmer-defined name such as `marks`,
`salary`, or `student_name`. It may contain letters, digits and `_`,
cannot start with a digit, cannot contain spaces and cannot be a
keyword. C is case-sensitive.

A **keyword** is a reserved word such as `int`, `if`, `else`, `for`,
`while`, `return`, `switch`, `case`, and `break`.

## 3. Operators available in C

-   Arithmetic: `+ - * / %`
-   Relational: `< > <= >= == !=`
-   Logical: `&& || !`
-   Assignment: `= += -= *= /= %=`
-   Increment/decrement: `++ --`
-   Conditional: `?:`
-   Bitwise: `& | ^ ~ << >>`
-   Other important operators: `sizeof`, `&`, `*`, `,`

## 4. Typecasting vs type conversion

**Type conversion** can happen automatically:

``` c
int a = 5;
float b = a;
```

**Typecasting** is explicit:

``` c
float result = (float)5 / 2;
```

  Conversion                                       Typecasting
  ------------------------------------------------ ----------------------
  May be automatic                                 Explicitly requested
  Also called implicit conversion when automatic   Explicit conversion

## 5. Variables and constants. Types of variables

A variable is named storage whose value can change:

``` c
int marks = 80;
marks = 90;
```

Constants are values that do not change in the relevant context,
e.g. `10`, `3.14`, `'A'`, or symbolic constants using `#define`/`const`.

Common variable categories taught in C include **local/automatic,
global, static and external (`extern`) variables**. These categories
should not be confused with data types such as `int`, `char`, `float`,
and `double`.

## 6. Why include `<stdio.h>`?

`<stdio.h>` is the standard input/output header. It provides
declarations for functions such as `printf()` and `scanf()`.

## 7. Header files and significance

Header files contain declarations and related information shared with
source files. Examples: `stdio.h`, `math.h`, `string.h`. They provide
declarations for library functions and help organize reusable
interfaces.

## 8. Program for simple and compound interest

``` c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double p, r, t, si, amount, ci;
    scanf("%lf %lf %lf", &p, &r, &t);
    si = (p*r*t)/100.0;
    amount = p * pow(1.0 + r/100.0, t);
    ci = amount - p;
    printf("SI = %.2f\nCI = %.2f\n", si, ci);
    return 0;
}
```

Formulas: `SI=(P×R×T)/100`, `CI=P(1+R/100)^T-P`.

## 9. Variables and rules for declaration

Syntax:

``` c
data_type variable_name;
```

Rules: valid identifier, type must be specified, cannot be a keyword,
cannot begin with a digit, no spaces, case-sensitive. Example:
`int a, b, c;`.

## 10. Post-increment vs pre-increment

`++k` increments first; `k++` uses the old value and increments
afterward.

Given `k=5`:

``` text
i = ++k → i=6, k=6
j = k++ → j=6, k=7
k++     → k=8
++k     → k=9
```

Final: **`i=6, j=6, k=9`**.

## 11. Input and output statements

Output:

``` c
printf("Age = %d", age);
```

Input:

``` c
scanf("%d", &age);
```

For ordinary variables, `scanf()` generally needs the address.

## 12. Bitwise, increment/decrement and logical operators

### Bitwise

`&`, `|`, `^`, `~`, `<<`, `>>` operate on integer bit patterns.

``` c
int a=5, b=3;
printf("%d", a & b); /* 1 */
```

### Increment/decrement

`++i`, `i++`, `--i`, `i--` change an integer-like operand by 1.

### Logical

`&&` AND, `||` OR, `!` NOT.

``` c
if (age >= 18 && age <= 60) printf("Eligible");
```

## 13. Point out errors

### (a)

``` c
area = 3.14 * r ** 2;
```

C does not use `**` for powers. Use `r*r` or `pow(r,2)`.

### (b)

``` c
k = ((a*b)+c) (2.5*a+b);
```

Missing operator. For multiplication:

``` c
k = ((a*b)+c) * (2.5*a+b);
```

### (c)

``` c
count = count + 1;
```

No syntax error if `count` is declared.

### (d)

``` c
3.14*r*r*h = vol_of_cyl;
```

Assignment is reversed. Correct:

``` c
vol_of_cyl = 3.14*r*r*h;
```

### (e)

``` c
m_inst = rate of interest * amount in rs;
```

Invalid identifiers/expression. A possible correction is:

``` c
m_inst = rate_of_interest * amount_in_rs;
```

## 14. Kilometres to meters, feet, inches and centimetres

``` c
#include <stdio.h>
int main(void)
{
    double km, m, ft, in, cm;
    scanf("%lf", &km);
    m = km*1000.0;
    ft = m*3.28084;
    in = m*39.3701;
    cm = km*100000.0;
    printf("Meters = %.2f\nFeet = %.2f\nInches = %.2f\nCentimeters = %.2f\n", m, ft, in, cm);
    return 0;
}
```

## 15. Aggregate and percentage for five subjects

Maximum total = `500`.

``` c
#include <stdio.h>
int main(void)
{
    float a,b,c,d,e,total,percentage;
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=(total/500.0f)*100.0f;
    printf("Aggregate = %.2f\nPercentage = %.2f%%\n", total, percentage);
    return 0;
}
```

## 16. Rectangle and circle calculations

``` c
#include <stdio.h>
int main(void)
{
    double l,b,r;
    const double PI=3.141592653589793;
    scanf("%lf%lf%lf", &l,&b,&r);
    printf("Rectangle area = %.2f\n", l*b);
    printf("Rectangle perimeter = %.2f\n", 2*(l+b));
    printf("Circle area = %.2f\n", PI*r*r);
    printf("Circle circumference = %.2f\n", 2*PI*r);
    return 0;
}
```

## 17. Interchange C and D

``` c
#include <stdio.h>
int main(void)
{
    int C,D,temp;
    scanf("%d%d", &C,&D);
    temp=C; C=D; D=temp;
    printf("C=%d D=%d\n", C,D);
    return 0;
}
```

## 18. Sum of digits of a five-digit number

Important: `%10` gets the last digit and `/10` removes it.

``` c
#include <stdio.h>
int main(void)
{
    int n,sum=0;
    scanf("%d", &n);
    while(n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
```

## 19. Fahrenheit to Centigrade

Formula: `C=(F-32)*5/9`.

``` c
#include <stdio.h>
int main(void)
{
    float f,c;
    scanf("%f", &f);
    c=(f-32.0f)*5.0f/9.0f;
    printf("Centigrade = %.2f\n", c);
    return 0;
}
```

## 20. Ramesh's gross salary

`DA=40% of basic`, `HRA=20% of basic`, `Gross=Basic+DA+HRA`.

``` c
#include <stdio.h>
int main(void)
{
    double basic,da,hra,gross;
    scanf("%lf", &basic);
    da=0.40*basic;
    hra=0.20*basic;
    gross=basic+da+hra;
    printf("Gross salary = %.2f\n", gross);
    return 0;
}
```

## 21. Five escape sequences

  Sequence   Meaning
  ---------- ----------------
  `\n`       New line
  `\t`       Horizontal tab
  `\\`       Backslash
  `\"`       Double quote
  `\'`       Single quote

``` c
printf("Hello\nWorld\n");
printf("Name:\tAlex\n");
printf("Path: C:\\Program\n");
printf("\"C Programming\"\n");
printf("\'C\'\n");
```

## 22. Five format specifiers

  Specifier   Typical use
  ----------- -------------------
  `%d`        int
  `%f`        float in `printf`
  `%c`        char
  `%s`        string
  `%lf`       double in `scanf`

Example:

``` c
int age=18; float marks=85.5f; char grade='A'; char name[]="Alex"; double x=3.14;
printf("%d %f %c %s %f", age,marks,grade,name,x);
```

## 23. Comment syntax

Single line:

``` c
// comment
```

Multi-line:

``` c
/*
   comment
*/
```

## 24. Operator precedence

Higher-precedence operators are evaluated before lower-precedence
operators.

``` c
x = 2 + 3 * 4;
```

`3*4=12`, then `2+12=14`, so `x=14`.

Parentheses can change the order: `(2+3)*4=20`.

## 25. Evaluate `x=a+b*c` for a=2,b=3,c=4

`b*c = 3*4 = 12`, then `a+12 = 2+12 = 14`. Therefore **x=14**.

## 26. Decision-making statements

### if

``` c
if(condition) { statements; }
```

### if-else

``` c
if(condition) { } else { }
```

### nested if

``` c
if(c1) { if(c2) { } }
```

### else-if ladder

``` c
if(c1) { }
else if(c2) { }
else { }
```

### switch

``` c
switch(choice)
{
case 1: printf("One"); break;
case 2: printf("Two"); break;
default: printf("Other");
}
```

Example:

``` c
int n; scanf("%d",&n);
if(n>0) printf("Positive");
else if(n<0) printf("Negative");
else printf("Zero");
```

## 27. When prefer `switch`?

Use `switch` when one expression is compared with several discrete
constant values, especially menus. Use `if/else-if` for relational/range
conditions such as `marks>=90`.

## 28. Declaration vs definition

A declaration tells the compiler about a name/type:

``` c
extern int x;
int add(int,int);
```

A definition actually defines an object or function:

``` c
int x=10;
int add(int a,int b){ return a+b; }
```

## 29. `break` vs `continue`

-   `break` terminates the nearest loop or `switch`.
-   `continue` skips the remaining body of the current loop iteration
    and proceeds to the next iteration.

## 30. `printf` vs `scanf`

  printf                    scanf
  ------------------------- ----------------------
  Output                    Input
  Displays formatted data   Reads formatted data
  `printf("%d",n);`         `scanf("%d",&n);`

## 31. while vs do-while

Both repeat statements. `while` checks the condition before the body and
may execute zero times. `do-while` checks after the body and therefore
executes at least once.

``` c
while(condition) { }

do { } while(condition);
```

## 32. Leap year program

``` c
#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);
    if(year%400==0) printf("Leap year");
    else if(year%100==0) printf("Not a leap year");
    else if(year%4==0) printf("Leap year");
    else printf("Not a leap year");
    return 0;
}
```

## 33. Sum of even numbers using a loop

``` c
#include <stdio.h>
int main(void)
{
    int n,i,sum=0;
    scanf("%d", &n);
    for(i=2;i<=n;i+=2) sum+=i;
    printf("Sum = %d\n", sum);
    return 0;
}
```

## 34. Iterative statements

### for

``` c
for(initialization; condition; update) { }
```

### while

``` c
while(condition) { }
```

### do-while

``` c
do { } while(condition);
```

Example:

``` c
for(int i=1;i<=5;i++) printf("%d ",i);
```

## 35. Algorithm, flowchart and C program for sum 1 to n

**Algorithm:**

``` text
1. Start
2. Input n
3. sum=0, i=1
4. While i<=n: sum=sum+i; i=i+1
5. Display sum
6. Stop
```

**Flowchart:**
`START → Input n → sum=0,i=1 → i<=n? → yes: sum=sum+i → i=i+1 → back to condition → no: display sum → STOP`

**C:**

``` c
#include <stdio.h>
int main(void)
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum+=i;
    printf("Sum = %d\n",sum);
    return 0;
}
```

## 36. Fibonacci algorithm and flowchart up to n terms

Assume `n` means number of terms.

**Algorithm:**

``` text
1. Start
2. Input n
3. a=0,b=1,i=1
4. While i<=n: print a; c=a+b; a=b; b=c; i=i+1
5. Stop
```

**Flowchart:**
`START → Input n → a=0,b=1,i=1 → i<=n? → yes: print a → c=a+b → a=b → b=c → i=i+1 → condition → no: STOP`

## 37. Syntax for nested if and else-if ladder

Nested:

``` c
if(c1)
{
    if(c2) { statement; }
}
```

Else-if ladder:

``` c
if(c1) { }
else if(c2) { }
else if(c3) { }
else { }
```

## 38. How does switch work without `break`?

It **falls through** into subsequent cases until a `break` or the end of
the switch.

``` c
int x=1;
switch(x)
{
case 1: printf("One\n");
case 2: printf("Two\n");
case 3: printf("Three\n");
}
```

Output:

``` text
One
Two
Three
```

## 39. Even/Odd using GOTO

``` c
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if(n%2==0) goto EVEN;
    goto ODD;
EVEN:
    printf("Even");
    goto END;
ODD:
    printf("Odd");
END:
    return 0;
}
```

## 40. Else-if ladder with flowchart and program

**Flowchart:**

``` text
START
  ↓
Input marks
  ↓
marks>=90? --yes--> Grade A --> STOP
  |
 no
  ↓
marks>=75? --yes--> Grade B --> STOP
  |
 no
  ↓
marks>=50? --yes--> Grade C --> STOP
  |
 no
  ↓
Fail → STOP
```

**Program:**

``` c
#include <stdio.h>
int main(void)
{
    int marks;
    scanf("%d", &marks);
    if(marks>=90) printf("Grade A");
    else if(marks>=75) printf("Grade B");
    else if(marks>=50) printf("Grade C");
    else printf("Fail");
    return 0;
}
```

------------------------------------------------------------------------

# Part B --- Output Questions

## 1.

``` c
main()
{
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d %d %f %f",k,l,a,b);
}
```

Integer division occurs first because `i` and `j` are integers:

`2/3=0`, so `k=0`; `3/2=1`, so `l=2`. The assignments to `float` happen
after the integer arithmetic, so `a=0.0`, `b=2.0`.

**Output:**

``` text
0 2 0.000000 2.000000
```

## 2.

``` c
float a=5,b=2;
int c;
c=a%b;
```

**Error:** `%` requires integer operands. `a` and `b` are floats. No
valid output.

## 3.

``` c
scanf(" %d %d ",&a,&b);
```

If the input is `10 20`, the intended output after the prompt is:

``` text
a = 10 b = 20
```

The whitespace in the format consumes surrounding whitespace. A trailing
whitespace character can cause interactive `scanf` to wait for a
subsequent non-whitespace character.

## 4.

``` c
scanf(" %d %d ",p,q);
```

**Error:** `scanf` needs addresses. Correct:

``` c
scanf("%d %d", &p, &q);
```

The original program has undefined behavior.

## 5.

`a=300`, so `a>=400` is false and `b` is never initialized. Printing `b`
gives **undefined behavior**. `c` is `200`; there is no reliable numeric
output for `b`.

## 6.

``` c
if(x==y);
printf("%d %d",x,y);
```

The semicolon is an empty statement, so `printf` executes
unconditionally.

**Output:** `10 20`

## 7.

``` c
if(x==3) printf("%d",x);
else;
printf("%d",y);
```

`x==3` is true, so first prints `3`. The final `printf` is outside the
`if-else`, so it prints `5` too.

**Output:**

``` text
3
5
```

## 8.

`x=3` and `y=3.0`; the comparison is true after the usual numeric
conversion.

**Output:**

``` text
x and y are equal
```

## 9.

``` c
b=a=15;
c=a<15;
```

Assignments associate right-to-left, so `a=15`, `b=15`. Then `15<15` is
false, giving `c=0`.

**Output:**

``` text
a = 15 b = 15 c = 0
```

## 10.

``` c
printf("%d %d %d", k==35, k=50, k>40);
```

Do **not** assume function arguments are evaluated left-to-right in C.
The expressions read and modify `k` in one argument list without a
sequencing guarantee sufficient for one fixed output. Therefore this is
**not a reliable fixed-output expression** in modern C. The exam lesson
is to avoid modifying and reading the same scalar object in unsequenced
function arguments.

------------------------------------------------------------------------

# Part C --- Find the Errors

## 1.

``` c
if('X' < 'x')
    printf("ascii value of X is smaller than that of x");
```

For the usual ASCII environment, there is **no syntax error** and the
condition is true because uppercase `X` has a smaller code than
lowercase `x`. Character-code ordering is technically
execution-character-set dependent in C.

## 2.

``` c
if(x >= 2) then
```

**Error:** C does not use `then`.

Correct:

``` c
if(x >= 2)
    printf("%d",x);
```

## 3.

``` c
if x >= 2
```

**Error:** `if` requires parentheses.

Correct:

``` c
if(x >= 2)
    printf("%d",x);
```

## 4.

Original:

``` c
scanf("%d %d",a,b);
if(a>b);
printf("This is a game");
else
printf("You have to play it");
```

Two important errors:

1.  Missing `&` in `scanf`.
2.  Extra semicolon after `if`, which breaks the intended `if-else`
    structure.

Correct program:

``` c
#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("This is a game");
    else
        printf("You have to play it");
    return 0;
}
```

------------------------------------------------------------------------

# High-Value Exam Revision

### C skeleton

``` c
#include <stdio.h>
int main(void)
{
    /* declarations */
    /* statements */
    return 0;
}
```

### Input

``` c
scanf("%d", &n);
```

### Output

``` c
printf("%d", n);
```

### if-else

``` c
if(condition) { }
else { }
```

### switch

``` c
switch(choice)
{
case 1: /*...*/ break;
case 2: /*...*/ break;
default: /*...*/
}
```

### Loops

``` c
for(initialization; condition; update) { }
while(condition) { }
do { } while(condition);
```

### Common traps

-   `=` means assignment; `==` means comparison.
-   `%` is for integer operands.
-   C does not use `**` for powers.
-   `scanf` normally needs addresses such as `&n`.
-   A semicolon after `if` can change the logic.
-   `switch` without `break` falls through.
-   `5/2` with integer operands gives `2`.
-   `++x` increments before use; `x++` increments after use.
-   `while` may execute zero times; `do-while` executes at least once.
-   `a+b*c` means `a+(b*c)` because `*` has higher precedence.
