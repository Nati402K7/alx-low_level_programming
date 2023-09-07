#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A eunction that concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: concatenater
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, n1, n2;

	if (s1 == NULL)
		s1 = NULL;

	if (s2 == NULL)
		s2 = NULL;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;

	for (n2 = 0; s2[n2] != '\0'; n2++)
		;

	s = malloc(n1 + n + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
