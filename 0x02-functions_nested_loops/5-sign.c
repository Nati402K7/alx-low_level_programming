#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: tacks input for function
 * Return: 1 print + if n > 0,  0 print 0 if n = 0 and -1 print - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
