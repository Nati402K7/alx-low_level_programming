#include "main.h"

/**
 * filp_bits - A function that returns the number of bits you would need tofilp
 * @n: first input
 * @m: second input
 * Return: number of bits
 */

unsigned int filp_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int v = 0;

	while (i)
	{
		if (i & 1ul)
			v++;

		i = i >> 1;
	}
	return (v);
}
