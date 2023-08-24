#include "main.h"

/**
 * *_strncat - A function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the bytes of src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

	c = 0;

	while (dest[c])
		c++;

	for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
		dest[c + c1] = src[c1];
	dest[c + c1] = '\0';

	return(dest);
}
