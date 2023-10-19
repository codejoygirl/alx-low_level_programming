#include "lists.h"
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
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", (unsigned int)h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
