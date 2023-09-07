#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: input
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
