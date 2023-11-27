#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * @filename: name of the file
 * @letters: number of byte
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t j;
	char con[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	j = read(i, &con[0], letters);
	j = write(STDOUT_FILENO, &con[0],j);
	close(i);

	return (j);
}
