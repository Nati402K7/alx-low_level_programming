#include "main.h"

/**
 * print_square - A functin that prints a square, followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
