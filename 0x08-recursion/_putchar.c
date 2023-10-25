#include "main.h"
#include <unistd.h>

/**
 * _putchar - A program that writes the charater c to stout
 * @c: The character to print
 * Return: If success 1, otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
