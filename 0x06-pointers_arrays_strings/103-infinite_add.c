#include "main.h"

/**
 * *infinite_add - A function that adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: to store the number
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, m, n, p = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > j)
	{
		l = i;
	}
	else
	{
		l = j;
	}

	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';

	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;

		if (i >= 0)
		{
			m = n1[i] - '0';
		}
		else
		{
			m = 0;
		}

		if (j >= 0)
		{
			n = n2[j] - '0';
		}
		else
		{
			n = 0;
		}

		r[k] = (m + n + p) % 10 + '0';
		p = (m + n + p) / 10;
	}
	if (p == 1)
	{
		r[l + 1] = '\0';

		if (l + 2 > size_r)
			return (0);

		while (l-- >= 0)
			r[l + 1] = r[l];

		r[0] = p + '0';
	}
	return (r);
}
