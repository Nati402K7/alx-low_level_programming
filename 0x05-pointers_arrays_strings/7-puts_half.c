#include "main.h"

/**
 * puts_half - A function that prints of a string, followed by a new line
 * @str: accept string from the user
 */

void puts_half(char *str)
{
	int i, l, n;

	n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n++;

	l = (n / 2);

	if ((n % 2) == 1)
		l = ((n + 1) / 2);

	for (i = l; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
