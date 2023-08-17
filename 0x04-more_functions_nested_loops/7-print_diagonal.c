#include "main.h"

/**
 * print_diagonal - A functio that draws a diagonal line on the terminal
 * @n: takes input from user
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (post = 0; post < n; post++)
		{
			for (space = 0; space <= post; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
