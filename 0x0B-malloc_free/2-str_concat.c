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
	int i = 0, j = 0, k = 0, l = 0;
	char *m;

	if (s1 == NULL)
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	m = malloc((sizeof(char) * l) + 1);

	if (m == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{

		if (k <= i)
			m[k] = s1[k];

		if (k >= i)
		{
			m[k] = s2[j];
			j++;
		}
		k++;
	}

	m[k] = '\0';
	return (m);
}
