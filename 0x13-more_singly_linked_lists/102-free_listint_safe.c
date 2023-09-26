#include "lists.h"

/**
 * find_listint_loop_f1 - A function that find a loop
 * @head: node
 * Return: address of node otherwith NULL
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *e;

	if (head == NULL)
		return (NULL);

	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);

		for (p = head; p != e; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: head
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t l;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop = find_listint_loop_fl(*h);

	for (l = 0; (*h != loop || i) && *h != NULL; *h = next)
	{
		l++;
		next = (*h)->next;
		if (*h == loop && i)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			l++;
			next = next->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (l);
}
