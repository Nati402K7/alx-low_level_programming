#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: input min num
 * @max: input max num
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	i = max - min + 1;
	p = malloc(sizeof(int) * i);

	if (!p)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = min++;

	return (p);
}
