#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: Zero
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - A program that multiplies two numbers
 * @argc: int
 * @argv: list
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int n, e, k;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	e = _atoi(argv[1]);
	k = _atoi(argv[2]);
	n = e * k;

	printf("%d\n", n);

	return (0);
}
