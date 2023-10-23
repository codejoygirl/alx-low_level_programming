#include "lists.h"

/**
 * add_nodeint_end - It adds a node at the end of linked list
 * @head: A pointer to first element in the list
 * @n: The data to insert in new element
 *
 * Return: A pointer to the new node, and NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
	{
	*head = new;
	return (new);
	}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
