# More Singly Linked Lists

## Project Overview

The **More Singly Linked Lists** project focuses on advanced manipulation of singly linked lists in the C programming language. It builds upon the foundational concepts of linked lists by introducing operations such as insertion, deletion, traversal, memory management, and data retrieval.

Linked lists are dynamic data structures that allow efficient insertion and deletion of elements without requiring contiguous memory allocation. This project demonstrates how linked lists can be used to store and manage data dynamically while reinforcing key concepts in pointers, structures, and memory allocation.


---

## Concepts Covered

### Singly Linked Lists

A singly linked list is a collection of nodes where each node contains:

1. Data
2. A pointer to the next node

Example:

```text
+------+-----+    +------+-----+    +------+------+
|  98  |  *------>| 402  |  *------>| 1024 | NULL |
+------+-----+    +------+-----+    +------+------+
```

Unlike arrays, linked lists:

* Grow dynamically during program execution.
* Do not require contiguous memory allocation.
* Allow efficient insertion and deletion.
* Require sequential traversal for access.

---

## Data Structure

The project uses the following structure:

```c
/**
 * struct listint_s - singly linked list node
 * @n: integer stored in the node
 * @next: pointer to the next node
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

---

## Project Requirements

### General

* Allowed editors:

  * vi
  * vim
  * emacs

* Operating system:

  * Ubuntu Linux

* Compilation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```



## File Structure

```text
more_singly_linked_lists/
│
├── lists.h
├── 0-print_listint.c
├── 1-listint_len.c
├── 2-add_nodeint.c
├── 3-add_nodeint_end.c
├── 4-free_listint.c
├── 5-free_listint2.c
├── 6-pop_listint.c
├── 7-get_nodeint.c
├── 8-sum_listint.c
├── 9-insert_nodeint.c
├── 10-delete_nodeint.c
├── README.md
```

---

## Function Descriptions

### 0. Print List

**File:** `0-print_listint.c`

Prints all elements of a `listint_t` list.

#### Prototype

```c
size_t print_listint(const listint_t *h);
```

#### Returns

* Number of nodes printed.

#### Example

```c
print_listint(head);
```

Output:

```text
98
402
1024
```

---

### 1. List Length

**File:** `1-listint_len.c`

Returns the number of elements in a linked list.

#### Prototype

```c
size_t listint_len(const listint_t *h);
```

#### Returns

* Number of nodes in the list.

---

### 2. Add Node at Beginning

**File:** `2-add_nodeint.c`

Adds a new node at the beginning of a list.

#### Prototype

```c
listint_t *add_nodeint(listint_t **head, const int n);
```

#### Returns

* Address of the new node.
* `NULL` on failure.

---

### 3. Add Node at End

**File:** `3-add_nodeint_end.c`

Adds a new node at the end of a linked list.

#### Prototype

```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

#### Returns

* Address of the new node.
* `NULL` on failure.

---

### 4. Free List

**File:** `4-free_listint.c`

Frees an entire linked list.

#### Prototype

```c
void free_listint(listint_t *head);
```

#### Purpose

Releases all memory allocated for the list.

---

### 5. Free List and Set Head to NULL

**File:** `5-free_listint2.c`

Frees a list and sets the head pointer to `NULL`.

#### Prototype

```c
void free_listint2(listint_t **head);
```

#### Benefits

Prevents dangling pointers after freeing memory.

---

### 6. Pop Head Node

**File:** `6-pop_listint.c`

Deletes the head node and returns its value.

#### Prototype

```c
int pop_listint(listint_t **head);
```

#### Returns

* Value of removed node.
* `0` if list is empty.

---

### 7. Get Node at Index

**File:** `7-get_nodeint.c`

Returns the node at a specific index.

#### Prototype

```c
listint_t *get_nodeint_at_index(listint_t *head,
unsigned int index);
```

#### Returns

* Pointer to node.
* `NULL` if index does not exist.

---

### 8. Sum List

**File:** `8-sum_listint.c`

Calculates the sum of all node values.

#### Prototype

```c
int sum_listint(listint_t *head);
```

#### Returns

* Sum of all integers.
* `0` if list is empty.

---

### 9. Insert Node at Index

**File:** `9-insert_nodeint.c`

Inserts a new node at a specified position.

#### Prototype

```c
listint_t *insert_nodeint_at_index(
listint_t **head,
unsigned int idx,
int n);
```

#### Returns

* Address of new node.
* `NULL` if insertion fails.

---

### 10. Delete Node at Index

**File:** `10-delete_nodeint.c`

Deletes a node at a specified index.

#### Prototype

```c
int delete_nodeint_at_index(
listint_t **head,
unsigned int index);
```

#### Returns

* `1` on success.
* `-1` on failure.

---

## Memory Management

Memory management is critical when working with linked lists.

### Allocation

New nodes are created using:

```c
malloc(sizeof(listint_t));
```

### Deallocation

Nodes should always be freed using:

```c
free(node);
```

### Best Practices

* Check the return value of `malloc()`.
* Free all allocated memory before program termination.
* Set pointers to `NULL` when appropriate.
* Avoid dereferencing freed memory.

---

## Example Program

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint_end(&head, 1024);

    printf("List:\n");
    print_listint(head);

    printf("Length: %lu\n", listint_len(head));
    printf("Sum: %d\n", sum_listint(head));

    free_listint(head);

    return (0);
}
```

### Sample Output

```text
List:
402
98
1024

Length: 3
Sum: 1524
```

---

## Compilation

Compile a single source file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o program
```

Compile the entire project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o more_linked_list
```


```bash
valgrind ./linked_list
```

Example:

```bash
valgrind --leak-check=full ./linked_list
```

---

## Key Takeaways

This project strengthens understanding of:

* Dynamic memory allocation
* Pointer manipulation
* Data structures
* Linked list traversal
* Memory safety
* Algorithmic problem-solving in C

These concepts form the foundation for more advanced data structures such as doubly linked lists, stacks, queues, trees, and graphs.
