#include "main.h"

/**
 * _putchar - A function that writes to stdout
 * @c: the character to print
 * Return: 1 if success, otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
