#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s: input string from users
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
