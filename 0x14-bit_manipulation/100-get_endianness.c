#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, otherwith 1
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
