#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prinys a buffer
 * @b: input buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (0 < size)
	{
		j = size - 0 < 10 ? size - 0 : 10;
		printf("%08x: ", 0);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");

			if (i % 2)
			{
				printf(" ");
			}
		}

		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
				c = '_';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
