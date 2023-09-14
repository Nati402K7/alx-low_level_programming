#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: constant number
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, c = n;
	va_list j;

	if (n == 0)
		return (0);
	va_start(j, n);

	while (c--)
		i += va_arg(j, int);
	va_end(j);

	return (i);
}
