#include "main.h"
#include <unistd.h>

/**
 * _putchar - A function that prints character to the stdout
 * @c: input character
 * Return: 1 if it is correct otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
