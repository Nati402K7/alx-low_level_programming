#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * @head: node
 * @index: index of node
 * Return: 1 if it success otherwith -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		del = *head;
		*head = (*head)->next;
		free(del);

		return (1);
	}
	del = *head;

	while (del)
	{
		if (i == index)
		{
			node->next = del->next;
			free(del);

			return (1);
		}
		i++;
		node = del;
		del = del->next;
	}
	return (-1);
}
