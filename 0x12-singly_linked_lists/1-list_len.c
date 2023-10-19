#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - To show the number of elements in a list
 * @h: A list thats linked
 *
 * Return: The number of element contained in a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
