#include "lists.h"

/**
 * reverse_listint _ A function that reverses a listint_t linked list
 * @head: node
 * Return: pointer of node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = '\0', *node = '\0';

	if (!head || !*head)
		return ('\0');

	list = *head;
	*head = NULL;

	while (list)
	{
		node = list->next;
		list->next = *head;
		*head = list;
		list = node;
	}
	return (*head);
}
