#include "lists.h"

/**
 * free_dlistint - A function that freea a dlistint_t list
 * @head: input head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
