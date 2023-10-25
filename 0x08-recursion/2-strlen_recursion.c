#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: input string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
