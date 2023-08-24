#include "main.h"

/**
 * *rot13 - A function that encodes a string using root13.
 * @s: input
 * Return: rot
 */

char *rot13(char *s)
{
	int i;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ALP[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot = n;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == alp[i])
			{
				*s == ALP[i];
				break;
			}
		}
		n++;
	}
	return (rot);
}
