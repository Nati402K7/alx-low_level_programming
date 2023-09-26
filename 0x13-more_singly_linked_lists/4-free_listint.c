#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: node
 */

void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head)
	{
		fre = head;
		head = head->next;
		free(fre);
	}
}
