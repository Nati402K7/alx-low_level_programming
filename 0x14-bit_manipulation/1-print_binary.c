#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: binary representation number
 */

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8, i = 0;

	while (num)
	{
		if (n & 1L << --num)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}

	if (!i)
		_putchar('0');
}
