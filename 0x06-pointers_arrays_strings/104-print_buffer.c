#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - A function that prints from 32 - 126
 * @n: input
 * Return: the value
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - A function that prints hexes
 * @b: input
 * @start: num start
 * @end: num end
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");

		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - A function that prints ASCII
 * @b: input
 * @start: num start
 * @end: num end
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);

		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - A function that prints a buffer
 * @b: input
 * @size: size in bytes
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
