# 0x06. Pointers, Arrays and Strings

## 📌 Description

This project is part of the low-level programming track in C. It focuses on understanding and applying concepts of **pointers**, **arrays**, and **strings**, which are fundamental to memory management and efficient programming in C.

The tasks in this project help build a solid foundation for handling data structures and manipulating memory directly.

---

## 🎯 Learning Objectives

By completing this project, you should be able to:

* Understand what pointers are and how to use them
* Explain the relationship between pointers and arrays
* Work with strings in C (C-style strings)
* Use pointer arithmetic effectively
* Pass pointers to functions
* Manipulate arrays and strings using pointers

---

## 📂 Project Structure

Each file in this repository contains a function that performs a specific task related to pointers, arrays, or strings.

### Implemented Functions

* `_strcat` – concatenates two strings
* `_strncat` – concatenates two strings using at most `n` bytes
* `_strncpy` – copies a string
* `_strcmp` – compares two strings
* `reverse_array` – reverses the content of an array
* `string_toupper` – changes lowercase letters to uppercase
* `cap_string` – capitalizes all words of a string
* `leet` – encodes a string into 1337
* `rot13` – encodes a string using ROT13

---

## 🛠️ Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compilation on Ubuntu using:

  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
* All files must end with a new line
* Code must follow the Betty coding style
* No use of standard library functions unless allowed

---

## 🚀 Compilation & Usage

To compile a file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output
```

Example:

```bash
./output
```

---

## 🧠 Key Concepts

* **Pointers**: Variables that store memory addresses
* **Arrays**: Collections of elements stored in contiguous memory
* **Strings**: Arrays of characters terminated by `'\0'`
* **Pointer Arithmetic**: Navigating memory using pointer operations