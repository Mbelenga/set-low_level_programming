# 📘 0x0A. argc, argv

## 📌 Description

This project introduces **command-line arguments in C**, focusing on how programs can receive input directly from the terminal using `argc` and `argv`.

---

## ⚙️ Learning Objectives

By the end of this project, you should be able to explain:

* What `argc` and `argv` are
* How to use arguments passed to your program
* How to compile programs with unused variables
* How to handle errors when arguments are missing or invalid

---

## 🧠 Concepts

### 🔹 `argc` (Argument Count)

* An integer that stores the number of arguments passed to the program
* Includes the program name itself

### 🔹 `argv` (Argument Vector)

* An array of strings (`char *argv[]`)
* Contains all arguments passed to the program

---

## 🧾 Syntax

```c
int main(int argc, char *argv[])
```

---

## 📂 Example

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

### ▶️ Compilation & Run

```bash
gcc main.c -o program
./program Hello World
```

### 🖥️ Output

```
Number of arguments: 3
Argument 0: ./program
Argument 1: Hello
Argument 2: World
```

---

## 🧩 Tasks Overview

### 0️⃣ Print program name

Print the name of the program.

---

### 1️⃣ Print number of arguments

Display how many arguments were passed.

---

### 2️⃣ Print all arguments

Print each argument on a new line.

---

### 3️⃣ Multiply two numbers

Convert arguments to integers and print their product.

---

### 4️⃣ Add positive numbers
