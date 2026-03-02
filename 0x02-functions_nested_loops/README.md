# 0x02 - Functions, Nested Loops

## Overview

This repository contains solutions for **C Programming project 0x02**, focused on mastering **functions** and **nested loops** in C. The exercises are designed to strengthen your understanding of:

* Declaring and defining functions
* Calling functions
* Using parameters and return values
* Writing loops inside other loops (nested loops)
* Implementing problem-solving logic in C

By completing these tasks, you will gain practical experience with reusable code structures and iterative problem solving.

---

## Project Requirements

* **Language:** C (ANSI C, Betty-compliant)
* **Compiler:** `gcc` or any C compiler compatible with the C89/C90 standard
* **Style Guide:** Betty coding style
* **Tools:** Only standard C library functions are allowed unless specified
* **Testing:** Each function should be tested in `main` before submission

---

## Files in this Repository

Each file corresponds to a specific task or exercise in the project:

| Filename                   | Description                                                         |
| -------------------------- | ------------------------------------------------------------------- |
| `0-positive_or_negative.c` | Determines if a number is positive, negative, or zero               |
| `1-alphabet.c`             | Prints the lowercase alphabet using a loop                          |
| `2-print_alphabet_x10.c`   | Prints the lowercase alphabet 10 times using nested loops           |
| `3-islower.c`              | Checks if a character is lowercase                                  |
| `4-isalpha.c`              | Checks if a character is alphabetic                                 |
| `5-sign.c`                 | Prints the sign of a number (+, -, 0)                               |
| `6-abs.c`                  | Computes the absolute value of an integer                           |
| `7-print_last_digit.c`     | Prints the last digit of a number                                   |
| `8-24_hours.c`             | Prints every minute of the day in 24-hour format using nested loops |
| `9-times_table.c`          | Prints the 9 times table using nested loops                         |
| `10-add.c`                 | Adds two integers and returns the result                            |
| `11-print_to_98.c`         | Prints all numbers from `n` to 98 using loops and functions         |                   |


## Learning Objectives

By completing this project, you will be able to:

1. **Understand Functions**

   * How to declare, define, and call functions in C.
   * The difference between `void` and returning functions.
   * Passing arguments to functions.

2. **Master Nested Loops**

   * Use loops within loops to handle repetitive tasks efficiently.
   * Solve problems like printing times tables, sequences, or patterns.

3. **Implement Control Flow**

   * Combine conditional statements and loops.
   * Make your programs handle different cases (positive/negative numbers, letters, etc.).

4. **Follow Coding Standards**

   * Write clean, readable, and maintainable code.
   * Use Betty style guidelines for indentation, comments, and function naming.

---

## Compilation and Usage

To compile a program:

```bash
gcc -Wall -Wextra -Werror -pedantic filename.c -o output
```

To run the program:

```bash
./output
```

Example:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-positive_or_negative.c -o positive
./positive
```
