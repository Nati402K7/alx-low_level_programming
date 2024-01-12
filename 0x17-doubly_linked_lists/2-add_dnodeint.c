#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of a dlist_t
 * @head: input head node
 * @n: input new node
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i = malloc(sizeof(dlistint_t));

	if  (!head || !i)
		return (i ? free(i), NULL : NULL);

	i->n = n;
	i->prev = NULL;
	if (!*head)
	{
		*head = i;
		i->next = NULL;
	}
	else
	{
		i->next = *head;
		(*head)->prev = i;
		*head = i;
	}
	return (i);
}
