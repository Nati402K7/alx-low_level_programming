#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new at a given postion
 * @h: input of head
 * @idx: index of new node added
 * @n: the new node
 * Return: the address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i = *h, *k;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		i = i->next;
		if (i == NULL)
			return (NULL);
	}

	if (i->next == NULL)
		return (add_dnodeint_end(h, n));

	k = malloc(sizeof(dlistint_t));

	if (k == NULL)
		return (NULL);

	k->n = n;
	k->prev = i;
	k->next = i->next;
	i->next->prev = k;
	i->next = k;

	return (k);
}
