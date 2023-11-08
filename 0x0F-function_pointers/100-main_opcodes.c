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
	char *i = (char *)main;
	int j;

	if (argc != 2)
		printf("Error\n"), exit(1);
	j = atoi(argv[1]);

	if (j < 0)
		printf("Error\n"), exit(2);

	while (j--)
		printf("%02hhx%s", *i++, j ? " " : "\n");

	return (0);
}
