#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: header node
 */

void free_list(list_t *head)
{
	list_t *i, *j;

	if (!head)
		return;

	i = head;

	while (i)
	{
		j = i->next;
		free(i->str);
		free(i);
		i = j;
	}
}
