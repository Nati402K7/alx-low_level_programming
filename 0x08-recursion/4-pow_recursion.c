#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x power of y
 * @x: input number
 * @y: power number
 * Return: x the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
