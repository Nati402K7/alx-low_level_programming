#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: node
 */

void free_listint2(listint_t **head)
{
	listint_t *fre, *i;

	if (!head)
		return;

	fre = *head;

	while (fre)
	{
		i = fre;
		fre = fre->next;
		free(i);
	}
	*head = NULL;
}
