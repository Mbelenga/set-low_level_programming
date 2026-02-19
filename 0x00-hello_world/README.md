# C - Hello, World

## 📌 Project Description

This project is an introduction to the C programming language.
It focuses on understanding the basics of compiling and running C programs using `gcc`, writing your first C program, and learning how the compilation process works.

The main goal is to print **"Hello, World"** to the standard output.

---

## 🎯 Learning Objectives

By completing this project, you should understand:

* What is C programming
* How to compile a C program using `gcc`
* What are `printf`, `puts`, and `putchar`
* The difference between compilation stages:

  * Preprocessing
  * Compilation
  * Assembly
  * Linking
---

## 🛠 Requirements

* Ubuntu 20.04 LTS
* gcc compiler
* Betty coding style
* All files compiled using:

  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```

---

## 📂 Files

| File Name        | Description                                                            |
| ---------------- | ---------------------------------------------------------------------- |
| `0-preprocessor` | Script that runs a C file through the preprocessor and save the result into another file                   |
| `1-compiler`     | Script that compiles a C file but does not link                        |
| `2-assembler`    | Script that generates assembly code                                    |
| `3-name`         | Script that compiles a C file and creates an executable named `cisfun` |
| `4-puts.c`       | Program that prints text using `puts`                                  |
| `5-printf.c`     | Program that prints text using `printf`                                |
| `6-size.c`       | Program that prints the size of various types                          |

---

## 🚀 Example Program

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World\n");
    return (0);
}
```

### ▶️ Compile & Run

```bash
gcc hello.c -o hello
./hello
```

**Output:**

```
Hello, World
```