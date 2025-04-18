## 0x1B. C - Sorting algorithms & Big O

## 📚 Project Overview

This project focuses on understanding and implementing classic **sorting algorithms** in C, along with their **time complexities**. It's a hands-on way to master the logic behind how data is organized and optimized in real-world software systems.

Each task explores a different sorting technique, their time complexity in various cases, and their behavior in sorting datasets.

## 🧠 Learning Objectives

By completing this project, you will be able to:

- Explain and implement at least four sorting algorithms.
- Understand and use **Big O notation** to evaluate algorithmic time complexity.
- Identify and choose the best sorting algorithm for different scenarios.
- Understand what a **stable sorting algorithm** is.
- Work collaboratively via **pair programming**.

## ⚙️ Requirements

- Use only allowed editors: `vi`, `vim`, `emacs`
- All code compiled with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- **No global variables**
- No more than **5 functions per file**
- **No standard library functions** like `printf`, `puts`, etc.
- Must follow **Betty style** conventions
- Each function prototype must be in `sort.h`
- Header files must be **include guarded**
- Only sort arrays/lists of size ≥ 2

---

## 🔧 Functions Implemented

### 0. Bubble Sort

**File:** `0-bubble_sort.c`  
**Prototype:** `void bubble_sort(int *array, size_t size);`

- Sorts an array of integers using **Bubble Sort**.
- Prints the array every time two elements are swapped.

**Time Complexities (in `0-O`):**
- Best case: `O(n)`
- Average case: `O(n^2)`
- Worst case: `O(n^2)`

---

### 1. Insertion Sort (Doubly Linked List)

**File:** `1-insertion_sort_list.c`  
**Prototype:** `void insertion_sort_list(listint_t **list);`

- Sorts a doubly linked list using **Insertion Sort**.
- Swaps nodes (not values) and prints the list after each change.

**Time Complexities (in `1-O`):**
- Best case: `O(n)`
- Average case: `O(n^2)`
- Worst case: `O(n^2)`

---

### 2. Selection Sort

**File:** `2-selection_sort.c`  
**Prototype:** `void selection_sort(int *array, size_t size);`

- Sorts an array using **Selection Sort**.
- Prints the array every time a swap is made.

**Time Complexities (in `2-O`):**
- Best case: `O(n^2)`
- Average case: `O(n^2)`
- Worst case: `O(n^2)`

---

## 🧪 Helper Functions

### `print_array(const int *array, size_t size)`

Used to print arrays — called after each swap in array-based sorts.

### `print_list(const listint_t *list)`

Used to print linked lists — called after each node swap in linked list sort.

Prototypes of both are declared in `sort.h`.

---

## 📁 Project Structure

```
sorting_algorithms/
├── 0-bubble_sort.c
├── 0-O
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── sort.h
├── print_array.c
├── print_list.c
└── README.md
```

---

## ✅ Compilation Example

To compile and run a test for Bubble Sort:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```
