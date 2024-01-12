#include "lists.h"

/**
 * add_dnodeint_end - A funtion that adds a new node at the end of a dlistint_t
 * @head: input head node
 * @n: input new node
 * Return: address of the new elementc or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i = malloc(sizeof(dlistint_t)), *node;

        if (!head || !i)
                return (i ? free(i), NULL : NULL);

        i->n = n;
        i->next = NULL;
        if (!*head)
        {
                i->prev = NULL;
                *head = i;
        }
        else
        {
                node = *head;
                while (node->next)
                        node = node->next;

                node->next = i;
                i->prev = node;
        }
        return (i);
}
