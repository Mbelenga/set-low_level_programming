# 📘 0x0B-preprocessor

## 📌 Description

This project introduces the **C preprocessor**, which processes your code **before compilation**. It handles tasks like including files, defining constants, and creating macros.

---

## ⚙️ What is the Preprocessor?

The **preprocessor** is a step that runs before compiling your C code. It interprets lines that start with `#`.

---

## 🔑 Key Concepts

### 1. `#include`

Used to include external files (usually header files).

```c
#include <stdio.h>
#include "main.h"
```

* `< >` → system libraries
* `" "` → local files

---

### 2. `#define`

Defines constants or macros.

```c
#define PI 3.14
#define SIZE 100
```

You can also define macros with arguments:

```c
#define SQUARE(x) ((x) * (x))
```

---

### 3. `#undef`

Removes a macro definition.

```c
#undef PI
```

---

### 4. Include Guards

Used to prevent multiple inclusion of the same header file.

```c
#ifndef MAIN_H
#define MAIN_H

/* code */

#endif
```

---

### 5. Predefined Macros

C provides built-in macros:

```c
__FILE__   // current file name
__LINE__   // current line number
__DATE__   // compilation date
__TIME__   // compilation time
```

---

### 6. Conditional Compilation

Allows compiling code based on conditions.

```c
#ifdef DEBUG
printf("Debug mode\n");
#endif
```

Other forms:

```c
#ifndef
#if
#else
#elif
#endif
```

---

## 🧠 Why It Matters

* Improves **code reuse**
* Makes programs more **flexible**
* Helps in **debugging**
* Supports **modular programming**

---

## 📂 Example

```c
#include <stdio.h>
#define MESSAGE "Hello, World!"

int main(void)
{
    printf("%s\n", MESSAGE);
    return 0;
}
```

---

## ⚠️ Best Practices

* Always use **parentheses in macros**
* Avoid overly complex macros
* Use **include guards** in header files
* Prefer `const` over `#define` for typed values when possible