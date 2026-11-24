# C Programming Exam Master Guide — Continuation
## Functions, Recursion, Pointers, Strings, Structures, Unions, Dynamic Memory and Files

> **How to use this file:** This is the continuation of your existing *C Programming Exam Master Guide — Exercises 1 to 5*. It starts after arrays and focuses on the remaining syllabus and college practical exercises. Keep the first guide for basics, operators, decisions, loops and arrays.

---

# 1. Remaining syllabus at a glance

The syllabus image and college practical list include the following remaining concepts:

| Topic | What you should prepare |
|---|---|
| Functions | Function declaration/prototype, definition, call, return value, arguments and parameters, call by value, preprocessor |
| Recursion | Recursive logic, base case, factorial, Fibonacci, recursive sum |
| Strings | Character arrays, null terminator, input/output, string library functions, practical string manipulation |
| Pointers | Address, pointer declaration, dereferencing, pointer to pointer, pointers and arrays, array of pointers, pointer to function |
| Structures | Define and access members, nested structure, array of structures, structure with functions |
| Unions | Shared memory, member access, difference between structure and union |
| Dynamic memory | `malloc`, `calloc`, `free` and basic allocation checking |
| File management | `FILE`, `fopen`, `fclose`, `fprintf`, `fscanf`, `fgetc`, `fputc`, `fgets`, `fputs` |
| Additional theory | Dynamic problem solving, recursion/search concepts and the AI/NLP topics shown in the syllabus image |

The college practical PDF specifically lists Exercises 6–9 for functions, strings, pointers/file operations, and structures/unions. The notes below cover those practicals and add the connected theory listed in the syllabus.

---

# PART A — FUNCTIONS

## 2. What is a function?

A **function** is a named block of code that performs a particular task. A function can receive data, process it and optionally return a result.

Why functions are useful:

- Avoid repeating the same code.
- Break a large program into smaller parts.
- Make programs easier to test and understand.
- Allow a task to be reused.

A C program normally starts execution from `main()`. Other functions run when they are called.

## 3. Function syntax

```c
return_type function_name(parameter_list)
{
    // statements
    return value;   // if return type is not void
}
```

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

- `int` — return type.
- `add` — function name.
- `int a, int b` — parameters.
- `return a + b;` — sends the result back to the caller.

## 4. Three important parts of a function

```c
#include <stdio.h>

int add(int, int);       // 1. Function prototype

int main(void)
{
    int answer = add(10, 20);   // 2. Function call
    printf("%d\n", answer);
    return 0;
}

int add(int a, int b)    // 3. Function definition
{
    return a + b;
}
```

### Function prototype

A prototype tells the compiler the function's name, return type and parameter types before it is called.

```c
int add(int, int);
```

Parameter names may be included, but are not required in the prototype.

### Function call

```c
answer = add(10, 20);
```

The values `10` and `20` are **arguments** (actual arguments).

### Function definition

The definition contains the statements that perform the task.

## 5. Parameters and arguments

```c
int square(int n)     // n is a parameter
{
    return n * n;
}

int main(void)
{
    int result = square(5);  // 5 is an argument
    return 0;
}
```

A **parameter** is the variable listed in the function definition. An **argument** is the value supplied during the call.

## 6. Four common function forms

### A. No arguments, no return value

```c
void showMessage(void)
{
    printf("Welcome\n");
}
```

### B. Arguments, no return value

```c
void printSum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}
```

### C. No arguments, returns a value

```c
int getNumber(void)
{
    int n;
    scanf("%d", &n);
    return n;
}
```

### D. Arguments and returns a value

```c
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}
```

For exams, be able to identify which form a given function uses.

## 7. Call by value

C passes ordinary arguments **by value**. The function receives a copy, so changing its local parameter does not change the caller's variable.

```c
#include <stdio.h>

void change(int x)
{
    x = 100;
}

int main(void)
{
    int a = 5;
    change(a);
    printf("%d\n", a);   // prints 5
    return 0;
}
```

To change the caller's variable, pass its address using a pointer. This is often informally called “call by reference” in beginner courses, but technically C still passes the pointer value by value.

## 8. Swap two numbers using a function and pointers

```c
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
```

- `&a` passes the address of `a`.
- `x` stores that address.
- `*x` accesses the value at that address.

## 9. Local and global variables

- **Local variable:** declared inside a function or block; its scope is limited to that block.
- **Global variable:** declared outside all functions; can be accessed by functions after its declaration, subject to scope rules.

Prefer local variables unless a shared global value is genuinely required.

## 10. Preprocessor directives

Preprocessor directives begin with `#` and are handled before normal compilation.

### Include a header

```c
#include <stdio.h>
```

### Define a macro

```c
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
```

Use parentheses in function-like macros to avoid precedence mistakes.

```c
int result = SQUARE(3 + 1);   // expands safely to ((3 + 1) * (3 + 1))
```

A macro is a text substitution, not a normal function. For beginner programs, a `const` variable or function is often safer.

---

# PART B — RECURSION

## 11. What is recursion?

**Recursion** is a technique in which a function calls itself to solve a smaller version of the same problem.

Every correct recursive solution needs:

1. **Base case:** stops further calls.
2. **Recursive case:** makes progress toward the base case.

Without a base case, the calls continue until the program runs out of stack space.

## 12. Factorial using recursion

Definition:

- `0! = 1`
- `n! = n × (n - 1)!` for positive `n`

```c
#include <stdio.h>

long long factorial(int n)
{
    if (n <= 1)                 // base case
        return 1;

    return n * factorial(n - 1); // recursive case
}

int main(void)
{
    int n;
    printf("Enter a non-negative number (small enough for long long): ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative integers.\n");
    else
        printf("%d! = %lld\n", n, factorial(n));

    return 0;
}
```

Example call sequence for `factorial(4)`:

```text
factorial(4)
= 4 * factorial(3)
= 4 * 3 * factorial(2)
= 4 * 3 * 2 * factorial(1)
= 4 * 3 * 2 * 1
= 24
```

`long long` still has a finite range; factorial values grow quickly.

## 13. Factorial without recursion (iteration)

```c
long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}
```

Recursion and iteration can solve the same problem. Iteration usually uses less function-call overhead for simple counting tasks.

## 14. Fibonacci sequence

The college practical hint uses the sequence:

```text
1 1 2 3 5 8 13 ...
```

Each term after the first two is the sum of the previous two.

### Recursive Fibonacci

```c
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

This simple recursive version is easy to understand but inefficient for large `n`, because it repeats many calculations.

### Print first N Fibonacci terms iteratively

```c
#include <stdio.h>

int main(void)
{
    int n;
    int first = 1, second = 1;

    printf("How many terms? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number of terms.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
```

## 15. Sum of first N numbers using a function

```c
#include <stdio.h>

int sumN(int n)
{
    if (n <= 0)
        return 0;

    return n + sumN(n - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("Sum = %d\n", sumN(n));
    return 0;
}
```

## 16. Recursion exam checklist

When writing a recursive function, ask:

- What is the smallest input?
- What result should that smallest input return?
- How does each call reduce the problem?
- Does the recursive call eventually reach the base case?

---

# PART C — STRINGS

## 17. What is a string in C?

C does not have a separate built-in `string` data type. A string is stored as an array of characters ending with the special null character `'\0'`.

```c
char word[] = "CAT";
```

Memory conceptually contains:

```text
'C'  'A'  'T'  '\0'
```

The null terminator marks the end of the string.

## 18. Declare and initialize strings

```c
char name[30];               // space for up to 29 visible characters + '\0'
char city[] = "Ahmedabad";
char letters[4] = {'C', 'A', 'T', '\0'};
```

Always leave room for the null terminator.

## 19. Input and output strings

### Read one word

```c
char name[40];
scanf("%39s", name);
printf("%s\n", name);
```

`%s` stops at whitespace, so it cannot read a full name containing spaces.

### Read a line with spaces

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[80];

    printf("Enter full name: ");
    if (fgets(name, sizeof name, stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';  // remove newline if present
        printf("Name: %s\n", name);
    }

    return 0;
}
```

If `scanf` was used immediately before `fgets`, the newline left in the input buffer may be read by `fgets`. Use a deliberate input strategy rather than mixing methods carelessly.

## 20. Important string functions (`string.h`)

| Function | Purpose | Example |
|---|---|---|
| `strlen(s)` | Length excluding `'\0'` | `strlen(name)` |
| `strcpy(dest, src)` | Copy string | `strcpy(b, a)` |
| `strcat(dest, src)` | Append string | `strcat(a, b)` |
| `strcmp(a, b)` | Compare strings | `strcmp(a, b) == 0` |

Remember:

- The destination array must be large enough for `strcpy` and `strcat`.
- `strcmp` returns `0` when strings are equal; it does **not** return `1` for equal strings.
- Do not compare strings with `==`; that compares addresses, not string contents.

## 21. String length without `strlen`

```c
#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    scanf("%99s", str);

    while (str[length] != '\0')
        length++;

    printf("Length = %d\n", length);
    return 0;
}
```

## 22. Copy a string without `strcpy`

```c
#include <stdio.h>

int main(void)
{
    char source[100], destination[100];
    int i = 0;

    scanf("%99s", source);

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Copied string: %s\n", destination);
    return 0;
}
```

## 23. Compare two strings without `strcmp`

```c
#include <stdio.h>

int main(void)
{
    char a[100], b[100];
    int i = 0;

    scanf("%99s %99s", a, b);

    while (a[i] == b[i] && a[i] != '\0')
        i++;

    if (a[i] == b[i])
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
```

## 24. Reverse a string

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    scanf("%99s", str);

    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("%s\n", str);
    return 0;
}
```

## 25. Convert lowercase to uppercase

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[100];
    scanf("%99s", str);

    for (int i = 0; str[i] != '\0'; i++)
        str[i] = (char)toupper((unsigned char)str[i]);

    printf("%s\n", str);
    return 0;
}
```

`toupper()` is declared in `ctype.h`. The cast to `unsigned char` avoids undefined behavior for negative `char` values on implementations where `char` is signed.

## 26. Find, replace and delete a character

A simple character replacement:

```c
for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == oldChar)
        str[i] = newChar;
}
```

To delete a character, shift the remaining characters left:

```c
int i = 0, j = 0;

while (str[i] != '\0') {
    if (str[i] != removeChar)
        str[j++] = str[i];

    i++;
}

str[j] = '\0';
```

This deletes every occurrence of `removeChar`.

---

# PART D — POINTERS

## 27. What is a pointer?

A **pointer** is a variable that stores the memory address of another object.

```c
int number = 25;
int *ptr = &number;
```

- `number` stores `25`.
- `&number` means the address of `number`.
- `ptr` stores that address.
- `*ptr` means the value located at the address stored in `ptr`.

## 28. Pointer operators

| Operator | Meaning |
|---|---|
| `&` | Address-of |
| `*` | Dereference (access the pointed-to value) |

Example:

```c
#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Address stored in p = %p\n", (void *)p);
    printf("Value through p = %d\n", *p);

    *p = 50;
    printf("New x = %d\n", x);

    return 0;
}
```

The exact address varies each run. Use `%p` and cast the pointer to `(void *)` for printing.

## 29. Pointer declaration

```c
int *p;
float *q;
char *r;
```

A pointer should be initialized to a valid address before dereferencing it.

```c
int *p = NULL;
```

Do not use `*p` while `p` is `NULL`.

## 30. Pointer to pointer

A pointer to pointer stores the address of another pointer.

```c
int value = 7;
int *p = &value;
int **pp = &p;

printf("%d\n", value);   // 7
printf("%d\n", *p);     // 7
printf("%d\n", **pp);   // 7
```

Concept:

```text
pp → p → value
```

## 31. Pointers and arrays

Array elements are stored contiguously.

```c
int a[4] = {10, 20, 30, 40};
int *p = a;              // same as &a[0]
```

These expressions are equivalent for valid indexes:

```c
a[i]
*(a + i)
p[i]
*(p + i)
```

Example:

```c
for (int i = 0; i < 4; i++)
    printf("%d ", *(p + i));
```

Pointer arithmetic moves by the size of the pointed-to type. For an `int *`, `p + 1` points to the next `int`, not necessarily the next byte.

## 32. Sum array elements using a pointer

This matches the college practical list.

```c
#include <stdio.h>

int main(void)
{
    int n, a[100], sum = 0;
    int *p = a;

    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    for (int i = 0; i < n; i++)
        sum += *(p + i);

    printf("Sum = %d\n", sum);
    return 0;
}
```

`scanf("%d", p + i)` receives the address of the element, so no additional `&` is needed.

## 33. Pointer to array

A pointer to an array points to the whole array object.

```c
int a[5] = {1, 2, 3, 4, 5};
int (*p)[5] = &a;

printf("%d\n", (*p)[2]);   // 3
```

Parentheses matter:

- `int *p[5]` — array of 5 pointers to int.
- `int (*p)[5]` — pointer to an array of 5 integers.

## 34. Array of pointers

```c
char *days[] = {"Mon", "Tue", "Wed"};

printf("%s\n", days[1]);   // Tue
```

This is an array whose elements are pointers to characters (string literals).

## 35. Pointer to function

A function pointer stores the address of a function with a matching signature.

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*operation)(int, int) = add;

    printf("%d\n", operation(4, 6));  // 10
    return 0;
}
```

Function pointers are useful for selecting a function at runtime, such as a menu-driven calculator.

## 36. Practical: display values and addresses of different data types

```c
#include <stdio.h>

int main(void)
{
    int i = 10;
    float f = 2.5f;
    char c = 'A';

    printf("int: value=%d address=%p\n", i, (void *)&i);
    printf("float: value=%.2f address=%p\n", f, (void *)&f);
    printf("char: value=%c address=%p\n", c, (void *)&c);

    return 0;
}
```

## 37. Pointer mistakes to avoid

- Dereferencing an uninitialized pointer.
- Dereferencing `NULL`.
- Accessing an array outside its bounds.
- Returning the address of a local automatic variable.
- Confusing `p` (address) with `*p` (value).
- Using `%d` to print an address; use `%p`.

---

# PART E — STRUCTURES AND UNIONS

## 38. What is a structure?

A **structure** groups related variables of possibly different data types under one name.

```c
struct Student
{
    int roll;
    char name[50];
    float percentage;
};
```

This defines a structure type. It does not by itself create a student variable.

## 39. Declare and access a structure

```c
struct Student s1;

s1.roll = 52;
s1.percentage = 86.5f;
```

Use the dot operator `.` to access a member.

Initialization:

```c
struct Student s2 = {101, "Asha", 91.25f};
```

## 40. Practical: employee structure

```c
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main(void)
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter name (one word): ");
    scanf("%49s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}
```

## 41. Array of structures

The college practical asks for information of 10 students.

```c
#include <stdio.h>

struct Student
{
    char name[40];
    int roll;
    float marks[3];
    float total;
    float percentage;
};

int main(void)
{
    struct Student s[10];

    for (int i = 0; i < 10; i++) {
        printf("Student %d name and roll: ", i + 1);
        scanf("%39s %d", s[i].name, &s[i].roll);

        s[i].total = 0;

        for (int j = 0; j < 3; j++) {
            printf("Subject %d marks: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0f;
    }

    for (int i = 0; i < 10; i++) {
        printf("%s | Roll %d | Total %.2f | Percentage %.2f%%\n",
               s[i].name, s[i].roll, s[i].total, s[i].percentage);
    }

    return 0;
}
```

## 42. Nested structure

A structure can contain another structure as a member.

```c
struct Date
{
    int day, month, year;
};

struct Student
{
    int roll;
    char name[40];
    struct Date dob;
};
```

Access nested members:

```c
student.dob.day
student.dob.month
student.dob.year
```

## 43. Structure with a function

A function can receive a structure as an argument.

```c
struct Point
{
    int x;
    int y;
};

void displayPoint(struct Point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}
```

A function can also return a structure:

```c
struct Point makePoint(int x, int y)
{
    struct Point p = {x, y};
    return p;
}
```

## 44. Pointer to structure

Use the arrow operator `->` when accessing a structure member through a pointer.

```c
struct Employee e = {1, "Ravi", 25000.0f};
struct Employee *p = &e;

printf("%d\n", p->id);
printf("%s\n", p->name);
```

`p->id` is equivalent to `(*p).id`.

## 45. What is a union?

A **union** allows different members to share the same memory location.

```c
union Data
{
    int i;
    float f;
    char c;
};
```

Example:

```c
union Data d;

d.i = 10;
printf("%d\n", d.i);

d.f = 3.5f;
printf("%.1f\n", d.f);
```

After storing `d.f`, the previous `d.i` value should not be treated as still available. A union is generally used to store one of its alternative member values at a time.

## 46. Structure versus union

| Structure | Union |
|---|---|
| Each member has its own storage | Members share storage |
| Can hold all members' values simultaneously | Intended to hold one active alternative at a time |
| Size is enough for all members plus possible padding | Size is at least enough for its largest member plus possible alignment |
| Use `.` or `->` for members | Use `.` or `->` for members |

## 47. Practical: union with int, float and char

```c
#include <stdio.h>

union Value
{
    int i;
    float f;
    char c;
};

int main(void)
{
    union Value v;

    v.i = 25;
    printf("Integer = %d\n", v.i);

    v.f = 4.5f;
    printf("Float = %.2f\n", v.f);

    v.c = 'A';
    printf("Character = %c\n", v.c);

    return 0;
}
```

Each assignment is followed by reading the same member. Do not expect all three values to remain stored simultaneously.

---

# PART F — DYNAMIC MEMORY ALLOCATION

## 48. Why dynamic memory?

An ordinary array has a fixed size decided at declaration. Dynamic memory allocation allows memory to be requested while the program is running.

The standard functions are declared in:

```c
#include <stdlib.h>
```

## 49. `malloc()`

Allocates a block of memory of the requested number of bytes. The memory is uninitialized.

```c
int *p = malloc(n * sizeof *p);
```

Always check whether allocation succeeded:

```c
if (p == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}
```

## 50. `calloc()`

Allocates space for a number of elements and initializes all bytes to zero.

```c
int *p = calloc(n, sizeof *p);
```

## 51. `free()`

Releases dynamically allocated memory when it is no longer needed.

```c
free(p);
p = NULL;
```

Setting the pointer to `NULL` after freeing helps avoid accidentally using that same pointer again.

## 52. Complete example: dynamic array sum

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    long long sum = 0;

    printf("Number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    int *a = malloc((size_t)n * sizeof *a);

    if (a == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %lld\n", sum);

    free(a);
    a = NULL;

    return 0;
}
```

### Important memory terms

- **Memory leak:** allocated memory is no longer reachable and was not freed.
- **Dangling pointer:** pointer refers to memory that is no longer valid.
- **NULL pointer:** pointer intentionally points to no object.
- **Out-of-bounds access:** reading or writing outside allocated memory.

---

# PART G — FILE MANAGEMENT

## 53. What is file handling?

File handling lets a program store data in a file so it can be used after the program ends.

The standard file functions are declared in:

```c
#include <stdio.h>
```

A file pointer is declared as:

```c
FILE *fp;
```

## 54. Open and close a file

```c
fp = fopen("data.txt", "r");
```

Always check:

```c
if (fp == NULL) {
    printf("Could not open file\n");
    return 1;
}
```

Close it when finished:

```c
fclose(fp);
```

## 55. Common file modes

| Mode | Meaning |
|---|---|
| `"r"` | Read existing file |
| `"w"` | Write; creates or truncates file |
| `"a"` | Append; creates if needed |
| `"r+"` | Read and write existing file |
| `"w+"` | Read/write; creates or truncates |
| `"a+"` | Read and append |

Binary modes add `b`, such as `"rb"` or `"wb"`.

## 56. Write text to a file

```c
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("message.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    fprintf(fp, "C Programming Lab\n");
    fprintf(fp, "File handling example\n");

    fclose(fp);
    return 0;
}
```

## 57. Read text from a file

```c
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("message.txt", "r");
    char line[200];

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    while (fgets(line, sizeof line, fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}
```

## 58. Copy one file to another (college practical)

```c
#include <stdio.h>

int main(void)
{
    FILE *source = fopen("input.txt", "r");
    FILE *destination = fopen("output.txt", "w");
    int ch;

    if (source == NULL) {
        printf("Cannot open input.txt\n");
        return 1;
    }

    if (destination == NULL) {
        printf("Cannot open output.txt\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied\n");
    return 0;
}
```

Using `int ch` is important because `fgetc()` must be able to represent every unsigned-char value and the special `EOF` value.

## 59. File function quick reference

| Function | Purpose |
|---|---|
| `fopen()` | Open file |
| `fclose()` | Close file |
| `fprintf()` | Formatted output to file |
| `fscanf()` | Formatted input from file |
| `fgetc()` | Read one character |
| `fputc()` | Write one character |
| `fgets()` | Read a line/string |
| `fputs()` | Write a string |
| `EOF` | End-of-file indicator |

---

# PART H — COLLEGE PRACTICAL EXERCISES 6–9

The following questions are based on the remaining practical exercises in your uploaded **Final Practical Set List.pdf**.

## Exercise 6 — Functions

### Q1. Prepare a function to add the first N numbers

Use a function such as:

```c
int addFirstN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
```

Write a complete program that reads `n`, calls `addFirstN(n)` and prints the result.

### Q2. Factorial using recursion and without recursion

Prepare both versions:

- `factorialRecursive(n)`
- `factorialIterative(n)`

Test `0`, `1`, `5` and a negative input. Decide how your program handles negative input.

### Q3. Calculator using user-defined functions

Create separate functions:

```c
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
```

Use a `switch` in `main()` to select the operation. Check division by zero.

### Q4. Sum of digits of a five-digit number — with and without recursion

Iterative idea:

```c
sum = 0;
while (n > 0) {
    sum += n % 10;
    n /= 10;
}
```

Recursive idea:

```c
int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sumDigits(n / 10);
}
```

### Q5. First 25 Fibonacci numbers using recursion

Write a recursive function that returns a Fibonacci term, then print the first 25 terms using a loop. The college sheet's sequence starts `1, 1, 2, 3, 5...`. Note that the simple recursive method is slow for larger terms; for 25 terms it is acceptable for practice but a loop is more efficient.

## Exercise 7 — Strings

### Q1. Copy one string with and without `strcpy()`

- Version A: use `strcpy(destination, source)`.
- Version B: copy characters in a loop and add `'\0'`.

### Q2. Compare two strings

- Version A: use `strcmp()`.
- Version B: compare corresponding characters until a difference or null terminator.

### Q3. Reverse a string

Reverse the characters in-place using two indexes: start and end.

### Q4. Convert lowercase letters to uppercase

Use `toupper()` from `ctype.h` or apply character conversion carefully.

### Q5. Find, replace and delete a character

Write a menu-driven program that can:
1. Find the first occurrence of a character.
2. Replace all occurrences.
3. Delete all occurrences.

Be sure to terminate the resulting string with `'\0'`.

## Exercise 8 — Pointers and file operations

### Q1. Display value and address of different data types

Use an `int`, `float` and `char`; display each value and address with `%p`.

### Q2. Find string length using pointer and function

Example function:

```c
int stringLength(const char *s)
{
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}
```

### Q3. Sum N integers using a pointer

Read values into an array and use `*(p + i)` or pointer traversal to calculate the sum.

### Q4. Read one file and write its contents to another

Use `fopen`, `fgetc`, `fputc`, error checks and `fclose`.

## Exercise 9 — Structures and unions

### Q1. Store 10 students using a structure

Required fields from the college list: name, roll number, marks, total and percentage.

### Q2. Define a `cricket` structure

Include:
- Player name
- Team name
- Batting average

Create and display at least one record.

### Q3. Union with integer, float and character

Store and display each member separately, remembering that union members share memory.

### Q4. Employee structure

Include employee ID, name and salary; accept input and display the details.

### Q5. Demonstrate structure and union together

Create a student structure containing ordinary student fields and a union member for one of several alternate values. Explain which union member is currently valid.

---

# PART I — EXTRA EXAM PRACTICE

These are additional practice questions beyond the exact practical list. Try them after the college exercises.

## 60. Function and recursion practice

1. Write a function to return the maximum of three integers.
2. Write a function to check whether a number is prime.
3. Write a recursive function to calculate the sum of digits.
4. Write a recursive function to calculate `a` raised to power `b`.
5. Explain the base case and recursive case for factorial.
6. Trace the function calls for `sumN(4)`.

## 61. String practice

1. Count vowels and consonants in a string.
2. Count spaces, digits and alphabetic characters in a line.
3. Check whether a word is a palindrome.
4. Count the number of words in a sentence.
5. Remove all spaces from a string.
6. Find the first and last occurrence of a character.
7. Implement string length, copy and compare without library functions.

## 62. Pointer practice

1. Swap two integers using pointers.
2. Find the maximum element in an array using pointer traversal.
3. Reverse an array using two pointers.
4. Explain the difference between `int *p`, `int **p`, `int *p[5]` and `int (*p)[5]`.
5. Write a function that receives an array and its size and returns the sum.
6. Explain why returning the address of a local variable is unsafe.

## 63. Structure and union practice

1. Store and display information of 5 books.
2. Store 5 employees in an array of structures and find the highest salary.
3. Create a nested structure for student details and date of birth.
4. Compare the sizes of a structure and union containing `int`, `float` and `char` using `sizeof`.
5. Write a function that accepts a structure and prints its members.

## 64. Dynamic memory and file practice

1. Allocate an array of N integers using `malloc` and find its average.
2. Allocate an array using `calloc`, display its initial values, then free it.
3. Explain a memory leak with a small example.
4. Write text to a file and read it back.
5. Append a line to an existing text file.
6. Copy a file character-by-character.
7. What is the difference between `"w"` and `"a"` file modes?

---

# PART J — ANSWER CHECKS AND COMMON EXAM MISTAKES

## 65. Short answer checks

| Question | Correct idea |
|---|---|
| What does `&x` mean? | Address of `x` |
| What does `*p` mean? | Value at the address stored in `p` |
| What is recursion? | A function calling itself |
| Why is a base case needed? | To stop recursion |
| What ends a C string? | `'\0'` |
| What does `strcmp(a,b) == 0` mean? | The strings are equal |
| What does `p->member` mean? | Access member through structure pointer |
| Do union members have separate storage? | No, they share storage |
| What does `malloc` return? | Pointer to allocated memory, or `NULL` on failure |
| Why use `free`? | Release dynamically allocated memory |
| What does `fopen` return on failure? | `NULL` |
| Why close a file? | Flush/finish operations and release the file resource |

## 66. Frequent mistakes

1. Calling a function before a visible prototype in older C code.
2. Forgetting the return statement in a non-`void` function.
3. Writing recursion without a base case.
4. Assuming changing a normal function parameter changes the original variable.
5. Using `==` to compare string contents.
6. Forgetting `'\0'` after manual string copying or editing.
7. Using an undersized destination array with `strcpy` or `strcat`.
8. Dereferencing an uninitialized or null pointer.
9. Confusing an array of pointers with a pointer to an array.
10. Accessing a union member other than the value most recently stored.
11. Forgetting to check `malloc`/`calloc` for `NULL`.
12. Forgetting `free` after dynamic allocation.
13. Forgetting to check `fopen` for `NULL`.
14. Forgetting to close a file.
15. Using `char` instead of `int` to store the result of `fgetc()` when checking `EOF`.

---

# PART K — SYLLABUS THEORY: AI, REASONING AND NLP TERMS

The syllabus image includes a separate AI-related section. These are brief theory notes for the listed terms; they are not additional C practicals.

## 67. Rule-based reasoning

A rule-based system represents knowledge using rules such as:

```text
IF condition THEN conclusion/action
```

Example:

```text
IF marks >= 40 THEN result = PASS
ELSE result = FAIL
```

A rule-based system applies rules to facts to derive a conclusion.

## 68. Step-by-step problem solving

A problem is broken into smaller, ordered steps. In programming, this connects to algorithms, pseudocode, flowcharts and structured control flow.

## 69. Data representation in AI systems

Data representation is the way information is stored so a system can process it. Examples include numbers, symbols, features, vectors, rules and structured records.

## 70. Feature encoding

Feature encoding converts information into a form suitable for an algorithm.

Examples:
- Category labels converted to numeric codes.
- Text converted into tokens or numeric vectors.
- A yes/no feature represented as `0` or `1`.

## 71. Decision trees

A decision tree represents decisions as a tree of questions or conditions.

- Internal node: test/condition.
- Branch: outcome of the test.
- Leaf: final decision or prediction.

Example:

```text
Marks >= 40?
  ├─ Yes → Pass
  └─ No  → Fail
```

## 72. Search and combinational reasoning

Search explores possible states or choices to find a solution. A search problem typically has:
- Initial state
- Possible actions
- State transitions
- Goal test
- Sometimes a path cost

Combinational reasoning considers possible combinations of choices.

## 73. Knowledge representation

Knowledge representation is the method used to encode facts, relationships and rules so a system can reason with them. The syllabus mentions philosophical ideas such as a priori representation; for an introductory answer, distinguish knowledge represented as rules/facts from knowledge learned from data.

## 74. Natural Language Processing (NLP)

NLP is a field concerned with processing human language using computers.

### Tokenization

Tokenization splits text into smaller units called tokens.

Example:

```text
Input:  C is easy to learn.
Tokens: ["C", "is", "easy", "to", "learn", "."]
```

Tokens may be words, subwords or characters depending on the tokenizer.

### Why tokenization matters

- Converts raw text into units a program can process.
- Supports counting, classification, search and language modeling.
- Tokenization is often an early step in an NLP pipeline.

---

# FINAL REVISION CHECKLIST

Before your exam, make sure you can do each of these without copying:

- [ ] Write a function prototype, definition and call.
- [ ] Explain parameters, arguments and call by value.
- [ ] Write factorial and Fibonacci programs.
- [ ] Explain recursion and identify the base case.
- [ ] Copy, compare and reverse strings.
- [ ] Use `strlen`, `strcpy`, `strcat`, `strcmp`.
- [ ] Explain `&`, `*`, pointer to pointer and pointer arithmetic.
- [ ] Sum array values using a pointer.
- [ ] Define and use a structure.
- [ ] Create an array of structures and a nested structure.
- [ ] Explain structure versus union.
- [ ] Use `malloc`, `calloc` and `free` safely.
- [ ] Open, read, write and close a file.
- [ ] Complete all practicals in Exercises 6–9.
- [ ] Define rule-based reasoning, feature encoding, decision tree and tokenization.

**Best study order:** Functions → recursion → strings → pointers → structures/unions → dynamic memory → files → extra theory and practice.
