#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: input
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
