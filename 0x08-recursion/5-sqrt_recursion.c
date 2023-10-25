#include "main.h"

/**
 * square - A function that square to numbers
 * @n: natural square root
 * @i: the square root of numbers
 * Return: square root
 */

int square(int n, int i);

/**
 * _sqrt_recursion - A function that returns the natural square root of a num
 * @n: natural square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - A function that square to numbers
 * @n: natural square root
 * @i: the square root of numbers
 * Return: square root
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
