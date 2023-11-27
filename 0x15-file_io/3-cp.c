#include "main.h"

#define USAGE "usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOREAD "Error: can't close i %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - A function that program
 * @ac: argument count
 * @av: argument vector
 * Return: 1 if success, otherwith -1
 */

int main(int ac, char **av)
{
	int i = 0, j = 0;
	ssize_t n;
	char con[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	i = open(av[1], O_RDONLY);

	if (i == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	j = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (j == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((n = read(i, con, READ_BUF_SIZE)) > 0)
		if (write(j, con, n) != n)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (n == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	i = close(i);
	j = close(j);

	if (i)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, i), exit(100);

	if (j)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, i), exit(100);

	return (EXIT SUCCESS);
}
