#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* print_array.c */
void print_array(const int *array, size_t size);



/* given structure for doubly linked list */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print_list.c */
void print_list(const listint_t *list);

/* 0. Bubble sort */
void bubble_sort(int *array, size_t size);

/* 1. insertion_sort_list */

void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **first_node, listint_t *second_node);

#endif
