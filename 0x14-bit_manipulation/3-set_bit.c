#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: binary represented number
 * @index: binary index
 * Return: 1 if it is working otherwith -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
