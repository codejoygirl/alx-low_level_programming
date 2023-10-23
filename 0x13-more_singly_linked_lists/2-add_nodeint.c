#include "lists.h"

/**
 * add_nodeint - This adds a nodes at the beginning of a list thats linked
 * @head: A Pointer to the first node in the list
 * @n: The Data to put in the new node.
 *
 * Return: A pointer to the new nodes and NULL if fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}

