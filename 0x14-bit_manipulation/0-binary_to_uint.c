#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: The convert number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		i = i * 2 + (*b++ - '0');
	}
	return (i);
}
