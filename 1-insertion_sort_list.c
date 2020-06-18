#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 *
 * @list: doubly linked list
 *
 * Return: Void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *next_node;

	if (!*list || !list || !(*list)->next)
		return;

	current_node = next_node = (*list)->next;

	while (next_node)
	{
		next_node = next_node->next;

		while (current_node->prev && current_node->n < current_node->prev->n)
		{
			current_node->prev->next = current_node->next;

			if (current_node->next)
				current_node->next->prev = current_node->prev;

			current_node->next = current_node->prev;
			current_node->prev = current_node->next->prev;
			current_node->next->prev = current_node;

			if (current_node->prev)
				current_node->prev->next = current_node;
			else
				*list = current_node;

			print_list(*list);
		}
		current_node = next_node;
	}
}
