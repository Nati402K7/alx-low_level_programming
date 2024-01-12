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

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->prev = NULL;

	if (*head != NULL)
	{
		while (*head->prev != NULL)
			*head = *head->prev;
	}

	i->next = *head;

	if (*head != NULL)
		*head->prev = i;

	*head = i;

	return (i);
}
