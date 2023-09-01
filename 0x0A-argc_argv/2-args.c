#include <stdio.h>
#include "main.h"

/**
 * main - A program that prinbts all arguments it receive
 * @argc: int
 * @argv: lisr
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
