#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Sums up a new node at the beginning of the list
 * @head: The main linked list
 * @str: String that sums up the node
 *
 * Return: Address of the new list and NULL if it failss
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
