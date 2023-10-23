#include "lists.h"

/**
 * sum_listint - This calculate sum of the data in a listint_t list
 * @head: The first node in a linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
