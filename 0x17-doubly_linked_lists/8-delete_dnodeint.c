#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at index of dlis
 * @head: input head dlist
 * @index: index of the node should be deleted
 * Return: 1 if succeede, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (i == NULL)
			return (-1);
		i = i->next;
	}

	if (i == *head)
	{
		*head = i->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		i->prev->next = i->next;
		if (i->next != NULL)
			i->next->prev = i->prev;
	}

	free(i);
	return (1);
}
