#include "main.h"

/**
 * is_digit - A function that checks is a digit
 * @s: input string
 * Return: 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - A function that counts string length
 * @s: input string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - error handlig
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A program that multiplies two positive numbers
 * @argc: input integer
 * @argv: list
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	char *n1, *n2;
	int i1, i2, i, j, k, l1, l2, *m, n = 0;

	n1 = argv[1], n2 = argv[2];

	if (argc != 3 || !is_digit(n1) || !is_digit(n2))
		errors();

	i1 = _strlen(n1);
	i2 = _strlen(n2);
	i = i1 + i2 + 1;

	m = malloc(sizeof(int) * i);

	if (!m)
		return (1);

	for (j = 0; j <= i1 + i2; j++)
		m[j] = 0;

	for (i1 = i1 - 1; i1 >= 0; i1--)
	{
		l1 = n1[i1] - '0';
		k  = 0;

		for (i2 = _strlen(n2) - 1; i2 >= 0; i2--)
		{
			l2 = n2[i2] - '0';
			k += m[i1 + i2 + 1] + (l1 * l2);
			m[i1 + i2 + 1] = k % 10;
			k /= 10;
		}

		if (k > 0)
			m[i1 + i2 + 1] += k;
	}

	for (j = 0; j < i - 1; j++)
	{
		if (m
				[j])
			n = 1;
		if (n)
			_putchar(m[j] + '0');
	}

	if (!n)
		_putchar('0');

	_putchar('\n');
	free(m);
	return (0);
}
