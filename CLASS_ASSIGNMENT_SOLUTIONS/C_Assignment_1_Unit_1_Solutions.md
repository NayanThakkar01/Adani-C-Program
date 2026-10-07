# Computer Programming --- Assignment 1 (Unit 1)

## Questions + Beginner-Friendly Solutions

**Source:** College-provided Assignment 1 (Unit 1). The question order
and topics follow the supplied assignment.

## 1. What is problem solving in programming? Explain the basic steps involved in solving a programming problem.

Problem solving in programming means understanding a problem, designing
a logical solution, implementing it as a program, testing it and
correcting errors.

### Steps

1.  Understand the problem.
2.  Identify inputs.
3.  Identify required outputs.
4.  Analyze formulas, conditions and logic.
5.  Design an algorithm.
6.  Draw a flowchart when required.
7.  Write the C program.
8.  Compile and find compile-time errors.
9.  Run and test with suitable inputs.
10. Debug errors.
11. Document and maintain the program.

------------------------------------------------------------------------

## 2. Describe the steps involved in translating a C program into an executable program.

Conceptually:

``` text
C source
  ↓
Preprocessor
  ↓
Compiler
  ↓
Assembler / object code
  ↓
Linker + libraries
  ↓
Executable
  ↓
Loader
  ↓
Execution
```

-   **Preprocessor:** handles directives such as `#include` and
    `#define`.
-   **Compiler:** translates C source into lower-level/object code and
    reports many compile-time errors.
-   **Assembler:** converts assembly to object code when used as a
    separate stage.
-   **Linker:** combines object files and required libraries and
    resolves references.
-   **Loader:** loads the executable into memory and prepares it for
    execution.

Exact internal stages depend on the compiler/toolchain, but this is the
standard introductory model.

------------------------------------------------------------------------

## 3. What are the advantages of using algorithms before writing programs?

-   Clarifies the problem.
-   Gives a step-by-step solution.
-   Reduces logical errors.
-   Makes coding easier.
-   Helps find missing cases early.
-   Is independent of programming language.
-   Makes debugging easier.
-   Helps communicate the solution.
-   Makes maintenance easier.
-   Can be converted into a flowchart and then a program.

------------------------------------------------------------------------

## 4. Discuss the role of compiler, linker, and loader.

  -----------------------------------------------------------------------
  Component                           Role
  ----------------------------------- -----------------------------------
  Compiler                            Translates source code into
                                      lower-level/object code and checks
                                      many compile-time errors.

  Linker                              Combines object files and libraries
                                      and resolves external references.

  Loader                              Loads the executable into memory
                                      for execution.
  -----------------------------------------------------------------------

------------------------------------------------------------------------

## 5. What is a high-level programming language? Difference between compiler and interpreter.

A **high-level language** uses programming constructs that are
relatively easy for humans to understand compared with machine language.
Examples include C, C++, Java and Python.

  -----------------------------------------------------------------------
  Compiler                            Interpreter
  ----------------------------------- -----------------------------------
  Translates a program before         Translates/executes instructions
  execution into a                    progressively at run time.
  lower-level/executable form.        

  Many errors are reported during     Errors are generally reported as
  compilation.                        execution reaches the relevant
                                      code.

  C is commonly taught as a compiled  Python is commonly described as
  language.                           interpreted, although
                                      implementations may use compilation
                                      internally.
  -----------------------------------------------------------------------

------------------------------------------------------------------------

## 6. List the characteristics of a good algorithm.

1.  Finiteness
2.  Definiteness
3.  Clearly specified input
4.  Clearly specified output
5.  Effectiveness
6.  Correctness
7.  Reasonable efficiency
8.  Generality

------------------------------------------------------------------------

## 7. Explain the difference between an algorithm and a program.

  -----------------------------------------------------------------------
  Algorithm                           Program
  ----------------------------------- -----------------------------------
  Logical step-by-step solution.      Coded implementation.

  Usually written in simple           Written in a programming language.
  language/pseudocode.                

  Language independent.               Language dependent.

  Focuses on logic.                   Includes logic and programming
                                      syntax.
  -----------------------------------------------------------------------

Example algorithm:

``` text
1. Start
2. Read A and B
3. SUM = A + B
4. Display SUM
5. Stop
```

C:

``` c
#include <stdio.h>
int main(void)
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
    return 0;
}
```

------------------------------------------------------------------------

## 8. What is a programming paradigm? Describe different programming paradigms with suitable examples.

A **programming paradigm** is a general style or approach for designing
programs.

### Procedural

Organizes programs around procedures/functions and ordered operations.
**Example:** C.

### Object-oriented

Organizes programs around objects/classes containing data and behavior.
**Examples:** C++, Java.

### Functional

Emphasizes functions and transformations of values. **Example:**
Haskell.

### Logic

Describes facts and rules from which answers are derived. **Example:**
Prolog.

------------------------------------------------------------------------

## 9. Differentiate between procedural, object-oriented, and functional programming.

  ------------------------------------------------------------------------------
  Feature           Procedural         Object-Oriented   Functional
  ----------------- ------------------ ----------------- -----------------------
  Main focus        Procedures/steps   Objects/classes   Functions/expressions

  Organization      Functions +        Objects           Function
                    sequence           containing        transformations
                                       data/behavior     

  Concepts          Functions, loops,  Class, object,    Pure functions,
                    conditions         inheritance       immutability

  Example           C                  C++, Java         Haskell
  ------------------------------------------------------------------------------

------------------------------------------------------------------------

## 10. Explain how programming paradigms influence program design. Why is C procedural?

A paradigm influences how a problem is divided, how data is represented,
how operations are organized and how modules are designed.

C is commonly classified as **procedural** because programs are
naturally organized into functions/procedures and sequences of
statements.

``` c
#include <stdio.h>
void greet(void) { printf("Hello\n"); }
int main(void)
{
    greet();
    return 0;
}
```

------------------------------------------------------------------------

## 11. Differentiate between an algorithm and a flowchart.

  Algorithm                         Flowchart
  --------------------------------- ---------------------------
  Textual/logical representation.   Graphical representation.
  Uses steps/pseudocode.            Uses symbols and arrows.
  Language independent.             Language independent.
  Easy to write and modify.         Easy to visualize.

Common symbols: **oval = start/stop, rectangle = process, parallelogram
= input/output, diamond = decision, arrow = flow.**

------------------------------------------------------------------------

## 12. Analyze the difference between an algorithm and a flowchart for the same problem.

For addition:

**Algorithm:**

``` text
1. Start
2. Input A and B
3. SUM = A + B
4. Display SUM
5. Stop
```

**Flowchart:**

``` text
START
  ↓
Input A, B
  ↓
SUM = A + B
  ↓
Display SUM
  ↓
STOP
```

The algorithm gives the solution in ordered textual steps; the flowchart
gives the same logic visually.

------------------------------------------------------------------------

# Sample Questions --- Algorithms and Flowcharts

## 1. Add two numbers

**Algorithm:**

``` text
1. Start
2. Input A, B
3. SUM = A + B
4. Display SUM
5. Stop
```

**Flowchart:** `START → Input A,B → SUM=A+B → Display SUM → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
```

## 2. Average of three numbers

**Algorithm:**

``` text
1. Start
2. Input A, B, C
3. SUM = A + B + C
4. AVG = SUM / 3
5. Display AVG
6. Stop
```

**Flowchart:**
`START → Input A,B,C → SUM=A+B+C → AVG=SUM/3 → Display AVG → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    float a, b, c, avg;
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3.0f;
    printf("Average = %.2f\n", avg);
    return 0;
}
```

## 3. Area and perimeter of a rectangle

**Formula:** `Area = L×B`, `Perimeter = 2×(L+B)`.

**Algorithm:** Input L,B → calculate area → calculate perimeter →
display both → stop.

**Flowchart:**
`START → Input L,B → Area=L×B → Perimeter=2(L+B) → Display → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    float l, b;
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\n", l*b);
    printf("Perimeter = %.2f\n", 2*(l+b));
    return 0;
}
```

## 4. Area of a circle

**Formula:** `Area = πr²`.

**Algorithm:** Start → input r → area = 3.14159×r×r → display → stop.

**Flowchart:** `START → Input r → Area=πr² → Display → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    float r, area;
    scanf("%f", &r);
    area = 3.14159f * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}
```

## 5. Celsius to Fahrenheit

**Formula:** `F = (9/5)C + 32`.

**Algorithm:** Start → input C → calculate F → display F → stop.

**Flowchart:** `START → Input C → F=(9/5)C+32 → Display F → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    float c, f;
    scanf("%f", &c);
    f = (9.0f/5.0f)*c + 32.0f;
    printf("Fahrenheit = %.2f\n", f);
    return 0;
}
```

## 6. Simple interest

**Formula:** `SI = (P×R×T)/100`.

**Algorithm:** Start → input P,R,T → calculate SI → display → stop.

**Flowchart:**
`START → Input P,R,T → SI=(P×R×T)/100 → Display SI → STOP`

**C program:**

``` c
#include <stdio.h>
int main(void)
{
    float p, r, t, si;
    scanf("%f %f %f", &p, &r, &t);
    si = (p*r*t)/100.0f;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
```

------------------------------------------------------------------------

# Unit 1 Quick Revision

-   Algorithm = step-by-step logical solution.
-   Flowchart = graphical representation of logic.
-   Program = coded implementation.
-   Compiler = translates source code.
-   Linker = combines object code and libraries.
-   Loader = loads executable into memory.
-   C = commonly classified as procedural.
-   Good algorithm = finite, definite, effective, correct and reasonably
    efficient.
