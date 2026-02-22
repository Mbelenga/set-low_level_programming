# 0x01. C - Variables, if, else, while

## 📌 Description

This project introduces fundamental concepts of the C programming language. It focuses on:

* Declaring and using variables
* Understanding data types
* Using arithmetic operators
* Writing conditional statements (`if`, `if...else`)
* Using loops (`while`)
* Printing output using standard library functions

This project strengthens the foundation needed to write structured and logical C programs.

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain:

* What are variables and how to declare them
* What are data types in C
* How to use `if`, `if...else`
* How to use comparison and logical operators
* How to use `while` loops
* How to use `putchar`
* The difference between `char`, `int`, `unsigned int`
* ASCII character set basics

---

## 🛠 Requirements

* Ubuntu 20.04 LTS
* GCC compiler
* Code must be compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

* Code must follow **Betty coding style**
* Maximum 5 functions per file
* No global variables

---

## 📂 Project Structure

Each file in this directory contains a standalone C program demonstrating specific concepts.

| File                       | Description                                                               |
| -------------------------- | ------------------------------------------------------------------------- |
| `0-positive_or_negative.c` | Prints whether a randomly generated number is positive, negative, or zero |
| `1-last_digit.c`           | Prints the last digit of a randomly generated number                      |
| `2-print_alphabet.c`       | Prints the alphabet in lowercase                                          |
| `3-print_alphabets.c`      | Prints the alphabet in lowercase and uppercase                            |
| `4-print_alphabt.c`        | Prints lowercase alphabet except 'q' and 'e'                              |
| `5-print_numbers.c`        | Prints numbers 0–9                                                        |
| `6-print_numberz.c`        | Prints numbers 0–9 using `putchar`                                        |
| `7-print_tebahpla.c`       | Prints lowercase alphabet in reverse                                      |
| `8-print_base16.c`         | Prints all hexadecimal digits                                             |
| `9-print_comb.c`           | Prints combinations of single-digit numbers                               |

---

## 🔎 Key Concepts Covered

### 1️⃣ Variables

Variables store data in memory.

Example:

```c
int number = 5;
char letter = 'A';
```

Common data types:

* `int`
* `char`
* `float`
* `double`
* `unsigned int`

---

### 2️⃣ Conditional Statements

Used to make decisions in code.

```c
if (number > 0)
{
    printf("Positive\n");
}
else
{
    printf("Negative\n");
}
```

Comparison operators:

* `==`
* `!=`
* `>`
* `<`
* `>=`
* `<=`

Logical operators:

* `&&`
* `||`
* `!`

---

### 3️⃣ While Loop

Used to repeat code while a condition is true.

```c
int i = 0;

while (i < 10)
{
    printf("%d\n", i);
    i++;
}
```

---

### 4️⃣ ASCII Table

Characters in C are represented using ASCII values.

Example:

* `'A'` = 65
* `'a'` = 97
* `'0'` = 48

This allows printing characters using numeric values.

---

## ▶️ How to Compile and Run

Compile:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output
```

Run:

```bash
./output
```

Example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o alphabet
./alphabet
```