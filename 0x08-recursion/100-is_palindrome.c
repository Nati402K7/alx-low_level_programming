#include "main.h"

/**
 * check - A function that check if it is palindrome
 * @s: input
 * @start: start number
 * @end: end number
 * @mod: mod
 * Return: Checked number
 */

int check(char *s, int start, int end, int mod);

/**
 * last_index - A function that return the last index
 * @s: input number
 * Return: n
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - A function that returns 1 if palindrome otherwith 0.
 * @s: input
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - A function that checks if it is palindrome
 * @s: input
 * @start: start number
 * @end: end number
 * @mod: mod
 * Return: check palindrome
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
