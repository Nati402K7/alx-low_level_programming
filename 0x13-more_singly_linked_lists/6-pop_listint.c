#include "lists.h"

/**
 * pop_listint - A fuction that deletes the head node of a listint_t list
 * @head: node
 * Return: head node data n otherwith 0
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int n;

	if (!head)
		return (0);

	del = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = del;

	return (n);
}
