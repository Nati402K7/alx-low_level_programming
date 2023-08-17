#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square rootr of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest prime factor of number
 * @num: number to find
 */

void largest_prime_factor(long int num)
{
	int pnum, lar;

	while (num % 2 == 0)
		num = num / 2;

	for (pnum = 3; pnum <= _sqrt(num); pnum += 2)
	{
		while (num % pnum == 0)
		{
			num = num / pnum;
			lar = pnum;
		}
	}

	if (num > 2)
		lar = num;
	printf("%d\n", lar);
}

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
