#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function that counts string length
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;

	return (size);
}

/**
 * argstostr - A function that concatenates all the arguments of program
 * @ac: input argument
 * @av: input
 * Return: concatenated
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *n;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, j++)
		j += _strlen(av[i]);

	n = malloc(sizeof(char) * j + 1);

	if (n == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++, l++)
			n[l] = av[i][k];

		n[l] = '\n';
		l++;
	}

	n[l] = '\0';
	return (n);
}
