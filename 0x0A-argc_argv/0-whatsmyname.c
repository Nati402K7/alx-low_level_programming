#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name
 * @argc: int
 * @argv: list name
 * Return: zero
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
