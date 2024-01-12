#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data of a dlistint
 * @head: input head node
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
