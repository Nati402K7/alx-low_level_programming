#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function
 * @argc: int
 * @argv: list
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	n = (char *)main;

	for (j = 0; j < i; j++)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", n[j]);
			break;
		}
		printf("%02hhx", n[j]);
	}
	return (0);
}
