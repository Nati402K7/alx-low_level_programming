#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a dlistint_t
 * @h: input head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if  (h == NULL)
		return (i);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
