#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: checks input of function
 * Return: 1 if c is a letter otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
