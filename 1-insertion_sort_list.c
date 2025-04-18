#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *		in ascending order
 *		using the Insertion sort algorithm.
 * description: mark the first element as sorted
 *              then start from the second index and compare between the nodes
 *              after the first iteration comparing will be on previous nodes
 * @list: doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iteration, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iteration = (*list)->next; iteration != NULL; iteration = tmp)
	{
		tmp = iteration->next;
		insert = iteration->prev;

		while (insert != NULL && iteration->n < insert->n)
		{
			swap_nodes(list, &insert, iteration);
			print_list(*list);
		}
	}

}

/**
 * swap_nodes - swap nodes.
 *
 * @h: point to head of the linked list.
 * @first_node: to swap it with the second node.
 * @second_node: second node.
 */

void swap_nodes(listint_t **h, listint_t **first_node, listint_t *second_node)
{
	(*first_node)->next = second_node->next;

	/* changes what nodes before and after first and second nodes */
	if (second_node->next != NULL)
		second_node->next->prev = *first_node;
	if ((*first_node)->prev)
		(*first_node)->prev->next = second_node;

	/* changes second node prev and next */
	second_node->prev = (*first_node)->prev;
	second_node->next = *first_node;

	/**
	 * changes first prev-node next if prev-node exists to point to second node,
	 * otherwise set second node as head
	 */
	if ((*first_node)->prev != NULL)
		(*first_node)->prev->next = second_node;
	else
		*h = second_node;
	(*first_node)->prev = second_node;
	*first_node = second_node->prev;
}
