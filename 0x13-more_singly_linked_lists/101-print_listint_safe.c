#include "lists.h"

/**
 * _p - A function that reallocat an array in the memory
 * @l: list
 * @s: size
 * @n: new
 * Return: rocation on memory
 */

cost listint_t **_p(const listint_t **l, size_t s, const listint_t *n)
{
	const listint_t **i;
	size_t c;

	i = malloc(s * sizeof(listint_t *));

	if (i == '\0')
	{
		free(l);
		exit(98);
	}

	for (c = 0; c < s - 1; c++)
		i[c] = l[c];

	i[c] = n;
	free(l);

	return (i);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: node
 * Return: num of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_y i, num = 0;
	const listint_t **l = NULL;

	while (head != '\0')
	{
		for (i = 0; i < num; i++)
		{
			if (head == l[i])
			{
				printf("-> [%p} %d\n", (void *)head, head->n);
				free(l);

				return (num);
			}
		}
		num++;
		l = _p(l, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (num);
}
