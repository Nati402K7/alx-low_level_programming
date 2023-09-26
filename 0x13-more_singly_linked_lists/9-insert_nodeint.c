#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a give
 * @head: node
 * @idx: index
 * @n: new node
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *give, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head)
		return ('\0');

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;

		return (new);
	}
	give = *head;

	while (give)
	{
		if (i == idx - 1)
		{
			new->next = give->next;
			give->next = new;

			return (new);
		}
		i++;
		give = give->next;
	}
	free(new);

	return ('\0');
}
