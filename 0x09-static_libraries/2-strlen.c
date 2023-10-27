#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: input string
 * Return: 0
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
