#include "main.h"

/**
 * _memset - memory file
 * @s: input pointer
 * @b: const
 * @n: byte
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: an array elements
 * @size: elements bytes
 * Return: pointers
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, size * nmemb);

	return (p);
}
