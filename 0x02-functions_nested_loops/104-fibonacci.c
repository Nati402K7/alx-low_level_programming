#include <stdio.h>

/**
 * numLength - The length of string
 * @num: operand num
 * Return: num of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 * Description: A program that finds and prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sum0 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sum0 = f1o + f2o + (f1 + f2) / mx;

		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sum0;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
