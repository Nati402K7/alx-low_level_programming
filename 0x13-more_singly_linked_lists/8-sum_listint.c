#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data of list
 * @head: node
 * Return: sum otherwith 0
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
