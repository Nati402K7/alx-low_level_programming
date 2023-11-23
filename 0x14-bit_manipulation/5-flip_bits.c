#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need filp
 * @n: first input number
 * @m: second input number
 * Return: flip numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int k = 0;

	while (i)
	{
		if (i & 1ul)
			k++;
		i = i >> 1;
	}
	return (k);
}
