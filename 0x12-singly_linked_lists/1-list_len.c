#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list_t
 * @h: input node
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
