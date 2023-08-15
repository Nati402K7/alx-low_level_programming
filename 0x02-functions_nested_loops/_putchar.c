#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character C to stdio
 *
 * @c: THe character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
