#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of list
 * @head: node
 * @index: nth of node
 * Return: nth of node otherwith NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth;
	unsigned int i;

	for (nth = head, i = 0; nth && i < index; nth = nth->next, i++)
		;

	return (nth);
}
