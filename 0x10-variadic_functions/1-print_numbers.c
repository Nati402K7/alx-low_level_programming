#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int c = n;
	va_list i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(i, n);

	while (c--)
		printf("%d%s", va_arg(i, int),
				c ? (separator ? separator : "") : "\n");
	va_end(i);
}
