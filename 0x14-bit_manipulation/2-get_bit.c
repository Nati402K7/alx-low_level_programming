#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: binary represented numbers
 * @index: the binary index
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
