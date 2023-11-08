#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - A program that writes the character C to stdout
 * @c: The character to print
 * Return: On success , On error - is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
