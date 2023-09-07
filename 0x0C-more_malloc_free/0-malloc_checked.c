#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: input
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
