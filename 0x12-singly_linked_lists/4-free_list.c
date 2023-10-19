#include <stdlib.h>
#include "lists.h"
/**
 * free_list - To free lists
 * @head: The linked lists head
 * Return: Returns nothing.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
