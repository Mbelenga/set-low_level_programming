# Singly Linked Lists

A **Singly Linked List** is a linear data structure where each element (called a node) contains:

1. **Data** – the value stored in the node
2. **Next Pointer** – a reference to the next node in the sequence

Unlike arrays, linked lists do not store elements in contiguous memory locations.

---

## Structure of a Node

```c
struct Node {
    int data;
    struct Node* next;
};
```

Example:

```text
[10 | • ] -> [20 | • ] -> [30 | NULL]
```

* `10`, `20`, `30` are data values
* Each node points to the next node
* The last node points to `NULL`

---

# Advantages

* Dynamic size
* Efficient insertion/deletion
* No memory wastage due to fixed size

# Disadvantages

* No direct access by index
* Extra memory needed for pointers
* Traversal is one-way only

---

# Common Operations

## 1. Traversal

Visit each node in the list.

### Example

```c
void printList(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
```

---

## 2. Insertion

### Insert at Beginning

```c
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}
```

### Insert at End

```c
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}
```

---

## 3. Deletion

### Delete First Node

```c
void deleteFirst(struct Node** head) {
    if (*head == NULL)
        return;

    struct Node* temp = *head;
    *head = (*head)->next;

    free(temp);
}
```

---

## 4. Searching

```c
int search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return 1;

        head = head->next;
    }

    return 0;
}
```

---

# Time Complexity

| Operation           | Complexity |
| ------------------- | ---------- |
| Access              | O(n)       |
| Search              | O(n)       |
| Insert at Beginning | O(1)       |
| Insert at End       | O(n)       |
| Delete at Beginning | O(1)       |

---

# Applications

* Implementing stacks and queues
* Dynamic memory allocation
* Graph adjacency lists
* Hash tables
* Music playlists and browser history

---

# Example Program

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    struct Node* first = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    head = first;

    printList(head);

    return 0;
}
```

---

# Output

```text
10 -> 20 -> 30 -> NULL
```

---

# Conclusion

Singly Linked Lists are useful when frequent insertions and deletions are needed. They provide flexibility in memory usage but have slower access times compared to arrays.
