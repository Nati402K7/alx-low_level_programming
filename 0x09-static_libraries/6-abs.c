#include "main.h"

/**
 * _abs - A function that commputes the absolute value of an integer
 * @n: takes input for function
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
