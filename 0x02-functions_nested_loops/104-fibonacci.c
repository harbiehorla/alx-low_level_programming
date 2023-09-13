#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	unsigned long f1, fh1, f2, fh2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);

		fibo1 = fibo2;
		fibo2 = sum;
	}

	f1 = fibo1 / 10000000000;
	f2 = fibo2 / 10000000000;
	fh1 = fibo1 % 10000000000;
	fh2 = fibo2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = f1 + f2;
		h2 = fh1 + fh2;
		if (fh1 + fh2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");

		f1 = f2;
		fh1 = fh2;
		f2 = h1;
		fh2 = h2;
	}
	printf("\n");
	return (0);
}
