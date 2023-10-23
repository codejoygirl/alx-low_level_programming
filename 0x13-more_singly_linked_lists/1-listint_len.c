#include "lists.h"

/**
 * listint_len - This returns number of elements in linked lists
 * @h: A linked list of type listint_t to the traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
