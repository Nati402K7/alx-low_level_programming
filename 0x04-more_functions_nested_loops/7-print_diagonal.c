#include "main.h"

/**
 * print_diagonal - A functio that draws a diagonal line on the terminal
 * @n: takes input from user
 */

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post < n; post++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
