#include "main.h"

/**
 * _isupper - A function that checkes for uppercase character
 * @c: taken input from user
 * Return: 1 if c is uppercase otherwith 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
