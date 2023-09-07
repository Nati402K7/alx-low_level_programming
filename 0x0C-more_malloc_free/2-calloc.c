#include "main.h"
#include <stdlib.h>

/**
 * _memset - memory file
 * @s: input pointer
 * @b: const
 * @n: byte
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: an array elements
 * @size: elements bytes
 * Return: pointers
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
