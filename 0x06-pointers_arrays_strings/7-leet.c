#include "main.h"

/**
 * *leet - A function that encodes a string into 1337.
 * @s: input
 * Return: n
 */

char *leet(char *s)
{
	char *n = s;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*s == letter[i] || *s == letter[i] + 32)
			{
				*s = 48 + num[i];
			}
		}
		s++;
	}
	return (n);
}
