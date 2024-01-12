#include "lists.h"

/**
 * add_dnodeint_end - A funtion that adds a new node at the end of a dlistint_t
 * @head: input head node
 * @n: input new node
 * Return: address of the new elementc or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i = malloc(sizeof(dlistint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head != NULL)
	{
		while (*head->next != NULL)
			*head = *head->next;
		*head->next = i;
	}
	else
	{
		*head = i;
	}

	i->prev = *head;

	return (i);
}
