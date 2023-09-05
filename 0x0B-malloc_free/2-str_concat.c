#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *m;

	if (s1 == NULL)
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	i = 0;
	j = 0;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	m = malloc(sizeof(char) * (i + j + 1));

	if (m == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		m[i] = s2[j];
		i++, j++;
	}

	m[i] = '\0';
	return (m);
}
