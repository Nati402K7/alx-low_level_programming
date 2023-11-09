#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line
 * @separator: string to print between the string
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int c = n;
	char *s;
	va_list i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(i, n);

	while (c--)
		printf("%s%s", (s = va_arg(i, char *)) ? s : "(nil)",
				c ? (separator ? separator : "") : "\n");
	va_end(i);
}
