#include <unistd.h>
#include "main.h"

/**
 * _putchar - A function that writes the character C to stdout
 * @c: The character to print
 * Return: 1 if success, otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
