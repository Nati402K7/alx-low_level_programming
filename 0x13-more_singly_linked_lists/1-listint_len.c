#include "lists.h"

/**
 * listint_len - A function that returns the number of elements listint_t
 * @h: node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
