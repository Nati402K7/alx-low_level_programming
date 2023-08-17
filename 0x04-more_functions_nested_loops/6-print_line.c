#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * @n: takes input from user
 */

void print_line(int n)
{
	int lnx;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnx = 1; lnx < = n; lnx++)
			_putchar('_');
		_putchar('\n');
	}
}
