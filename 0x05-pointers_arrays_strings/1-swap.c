#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: the first number
 * @b: the second number
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
