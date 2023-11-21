#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 * @head: node
 * @n: new node
 * Return: address of new element if success otherwith NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a = malloc(sizeof(listint_t));

	if (!head || !a)
		return ('\0');

	a->next = NULL;
	a->n = n;

	if (*head)
		a->next = *head;

	*head = a;
	return (a);
}
