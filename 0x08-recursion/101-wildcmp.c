#include "main.h"

/**
 * n - A function that checks with the special char
 * @s2: input
 * Return: s2
 */

char *n(char *s2)
{
	if (*s2 == '*')
		return (n(s2 + 1));
	else
		return (s2);
}

/**
 * k - A function that checks start point
 * @s1: first string
 * @s2: second string
 * Return: i
 */

int k(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		i += wildcmp(s1 + 1, s2 + 1);
	i += k(s1 + 1, s2);

	return (i);
}

/**
 * wildcmp - A function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if string identical otherwith 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (!*s1 && *s2 == '*' && !*n(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}

	if (!*s1 || !s2)
		return (0);

	if (*s2 == '*')
	{
		s2 = n(s2);

		if (!*s2)
			return (1);

		if (*s1 == *s2)
			i += wildcmp(s1 + 1, s2 + 1);

		i += k(s1, s2);
		return (!!i);
	}
	return (0);
}
