#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function countes string length
 * @s: input string
 * Return: length string
 */

int _strlen(char *s)
{
	int l = 0;

	for (; s[l] != '\0'; l++)
		;

	return (l);
}

/**
 * str_concat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *m;

	if (s1 == NULL)
		s1 = 'NULL';

	if (s2 == NULL)
		s2 = 'NULL';

	i = _strlen(s1);
	j = _strlen(s2);
	m = malloc((i + j) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (k = 0; k <= i + j; k++)
	{
		if (k < i)
			m[k] = s1[k];
		else
			m[k] = s2[k - i];
	}
	m[k] = '\0';
	return (m);
}
