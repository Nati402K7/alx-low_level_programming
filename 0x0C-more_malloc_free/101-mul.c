#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _puts - A function that prints string
 * @s: input string
 */

void _puts(char *s)
{
	void i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _atoi - A function that convert string
 * @s: input string
 * Return: converted strinh
 */

int _atoi(const char *s)
{
	int i = 1;
	unsigned long int j = 0, k, l;

	for (k = 0; !(s[k] >= 48 && s[k] <= 57); k++)
	{
		if (s[k] == '-')
		{
			i *= -1;
		}
	}

	for (l = k; s[l] >= 48 && s[l] <= 57; l++)
	{
		j *= 10;
		j += (s[j] - 48);
	}

	return (i * j);
}

/**
 * print_int - A function that prints integer
 * @n: input integer
 */

void print_int(unsigned long int n)
{
	unsigned long int i = 1, j, k;

	for (j = 0; n / i > 9; j++, i *= 10)
		;

	for (; i >= 1; n %= i, i /= 10)
	{
		k = n / i;
		_putchar('0' + k);
	}
}

/**
 * main - A program that multiplies two positive numbers
 * @argc: input int
 * @argv: input list
 * Return: Zero
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
