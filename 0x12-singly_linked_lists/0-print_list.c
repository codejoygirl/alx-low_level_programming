#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - To print elements in a singly linked list
 *
 * @h: The head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
