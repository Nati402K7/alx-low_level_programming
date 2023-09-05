#include "main.h"
#include <stdlib.h>

/**
 * word_len - locates the index
 * @str: string
 * Return: value
 */

int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
 * count_words - count words
 * @str: input string
 * Return: num string
 */

int count_words(char *str)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(str + i); i++)
		k++;

	for (i = 0; i < k; i++)
	{
		if (*(str + i) != ' ')
		{
			j++;
			i += word_len(str + i);
		}
	}
	return (j);
}

/**
 * strtow - A function that splits a string into words
 * @str: input string
 * Return: split string
 */

char **strtow(char *str)
{
	char **n;
	int i = 0, j, k, l, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = count_words(str);
	if (j == 0)
		return (NULL);

	n = malloc(sizeof(char *) * (j + 1));
	if (n == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		while (str[i] == ' ')
			i++;

		l = word_len(str + i);

		n[k] = malloc(sizeof(char) * (l + 1));

		if (n[k] == NULL)
		{
			for (; k >= 0; k--)
				free(n[k]);

			free(n);
			return (NULL);

		}

		for (m = 0; m < l; m++)
			n[k][m] = str[i++];

		n[k][m] = '\0';
	}
	n[k] = NULL;
	return (n);
}
