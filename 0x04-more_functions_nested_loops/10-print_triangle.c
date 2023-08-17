#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hig, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hig = 1; hig <= size; hig++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hig + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
