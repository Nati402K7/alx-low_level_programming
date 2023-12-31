#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: node
 * Return: pointer of node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	list = *head;
	*head = NULL;

	while (list)
	{
		next = list->next;
		list->next = *head;
		*head = list;
		list = next;
	}
	return (*head);
}
