#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: input number
 * @index: starts from 0 bit
 * Return: the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
