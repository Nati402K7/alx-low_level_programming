#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - A function that counts words
 * @s: input word
 * Return: num words
 */

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - A functio that splits a string into words
 * @str: input string
 * Return: split word
 */

char **strtow(char *str)
{
	int i, j, k, l, m = 0, n = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);

	m = wrdcnt(str);

	if (m == 1)
		return (NULL);

	w = (char **)malloc(m * sizeof(char *));

	if (w == NULL)
		return (NULL);

	w[m - 1] = NULL;
	i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;

			j++;
			w[n] = (char *)malloc(j * sizeof(char));
			j--;

			if (w[n] == NULL)
			{
				for (k = 0; k < n; k++)
					free(w[k]);

				free(w[m - 1]);
				free(w);

				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[n][l] = str[i + l];
			w[n][l] = '\0';
			n++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
