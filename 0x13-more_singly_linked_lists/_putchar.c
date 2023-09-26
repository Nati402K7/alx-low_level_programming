#include "lists.h"
#include <unistd.h>

/**
 * _putchar - A function that prints character to stdout
 * @c: input character
 * Return: 1 if success otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
