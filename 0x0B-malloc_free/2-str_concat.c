#include "main.h"

/**
 * str_concat - A function that concatenates two string
 * @s1: first input string
 * @s2: second input string
 * Return: concatneted string
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	unsigned int  i = 0, j = 0, k = 0, l = 0;

	while (s1 && s1[k])
		k++;

	while (s2 && s2[l])
		l++;

	n = malloc(sizeof(char) * (k + l + 1));

	if (n == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < k)
		{
			n[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (k + l))
		{
			n[i] = s2[j];
			i++;
			j++;
		}
	}
	n[i] = '\0';

	return (n);
}
