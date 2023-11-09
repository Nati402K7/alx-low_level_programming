#include "variadic_functions.h"

/**
 * format_char - A function that prints formats character
 * @separator: the string to print between string
 * @i: pointer
 */

void format_char(char *separator, va_list i)
{
	printf("%s%c", separator, va_arg(i, int));
}

/**
 * format_int - A function that prints formats integers
 * @separator: the string to print between string
 * @i: pointer
 */

void format_int(char *separator, va_list i)
{
	printf("%s%d", separator, va_arg(i, int));
}

/**
 * format_float - A function that prints formats floates
 * @separator: the string to print between string
 * @i: pointer
 */

void format_float(char *separator, va_list i)
{
	printf("%s%f", separator, va_arg(i, double));
}

/**
 * format_string - A function that prints formats stringes
 * @separator: the string to print between string
 * @i: pointer
 */

void format_string(char *separator, va_list i)
{
	char *s = va_arg(i, char *);

	if ((int)(!s))
		s = "(nil)";

	printf("%s%s", separator, s);
}

/**
 * print_all - A function that prints anything.
 * @format: arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *s = "";
	va_list n;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(n, format);

	while (format && format[i])
	{
		j = 0;

		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(s, n);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(n);
}
