#include "lists.h"
#include <unistd.h>

/**
 * _putchar - A program that prints a character to stdout
 * @c: the character that given
 * Return: 1 if it is success otherwith -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
