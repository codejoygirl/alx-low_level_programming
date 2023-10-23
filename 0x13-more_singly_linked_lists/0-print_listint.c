#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This prints all elements of the listint_t.
 *
 * @h: Pointer to a head of the list_t list.
 *
 * Return: Number of nodes in the list_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
