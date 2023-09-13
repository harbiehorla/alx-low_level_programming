#include <stdio.h>

/**
 * main -  finds and prints the sum of the even-valued terms
 * starting with 0 and 1
 * followed by a new line
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float total;

	while (1)
	{
		sum = fibo1 + fibo2;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			total = total + sum;
		}

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
