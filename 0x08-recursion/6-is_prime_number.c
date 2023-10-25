#include "main.h"

/**
 * check_prime - A functio that checks prime number
 * @n: input number
 * @i: checker number
 * Return: prime number
 */

int check_prime(int n, int i);

/**
 * is_prime_number - A function that returns checked numbers
 * @n: input number
 * Return: 1 if prime number otherwith 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - A function that checks prime number
 * @n: input number
 * @i: checker number
 * Return: prime number
 */

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
