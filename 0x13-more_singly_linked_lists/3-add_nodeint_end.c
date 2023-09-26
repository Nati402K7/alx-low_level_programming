#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of list
 * @head: node
 * @n: new node
 * Return: new address of element othewith NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add = malloc(sizeof(listint_t));
	listint_t *a;

	if (!head || !add)
		return (NULL);

	add->next = NULL;
	add->n = n;

	if (!*head)
	{
		*head = add;
	}
	else
	{
		a = *head;

		while (a->next)
			a = a->next;

		a->next = add;
	}
	return (add);
}
