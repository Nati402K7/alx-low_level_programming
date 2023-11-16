#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list_t list
 * @head: head node
 * @str: str node
 * Return: new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);

	if (str)
	{
		new_head->str = strdup(str);

		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
