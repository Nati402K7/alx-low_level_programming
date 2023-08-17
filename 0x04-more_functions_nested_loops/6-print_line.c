#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: takes input from user
 */

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln < = n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
