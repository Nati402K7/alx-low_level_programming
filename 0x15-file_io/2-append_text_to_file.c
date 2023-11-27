#include "main.h"

/**
 * _strlen - A function that countes the string
 * @s: input string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;

	return (i);
}

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: name of the file
 * @text_content terminated string value
 * Return: 1 if success, otherwith -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t j = 0, k = _strlen(text_content);

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (k)
		bytes = write(i, text_content, k);
	close(i);

	return (bytes == len ? 1 : -1);
}
