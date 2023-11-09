#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - A program that writes c to stdout
 * @c: the character to printed
 * Return: 1 if success otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
