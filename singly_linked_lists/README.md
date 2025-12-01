# SINGLY LINKED LIST

# Singly Linked Lists – C Project

This project introduces the concept of singly linked lists in C and implements basic operations for manipulating and managing linked data structures.

---

## Learning Objectives

By the end of this project, you should be able to:

- Understand what a singly linked list is and how it works
- Create and manipulate nodes in a linked list
- Traverse and print elements of a list
- Add nodes at the beginning and at the end of the list
- Manage memory correctly by freeing a complete list
- Work with pointers, dynamic allocation, and function prototypes

---

## Files and Functions

| File Name | Function | Description |
|-----------|----------|-------------|
| `0-print_list.c` | `size_t print_list(const list_t *h)` | Prints all elements of a `list_t` list and returns the number of nodes. If a string is `NULL`, prints `[0] (nil)`. |
| `1-list_len.c` | `size_t list_len(const list_t *h)` | Returns the number of elements in a `list_t` linked list. |
| `2-add_node.c` | `list_t *add_node(list_t **head, const char *str)` | Adds a new node at the beginning of a `list_t` list and returns the address of the new element. |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str)` | Adds a new node at the end of the list and returns the address of the new element. |
| `4-free_list.c` | `void free_list(list_t *head)` | Frees a `list_t` list, including all duplicated strings and allocated nodes. |

---

##  Data Structure Used

```c
/**
 * struct list_s - singly linked list node
 * @str: string (malloc'ed / duplicated)
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o list

```c
---

## Tools Used

C programming language
gcc compiler
Valgrind for memory leak analysis
