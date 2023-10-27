#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @src: the first string
 * @dest: the second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;

	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
