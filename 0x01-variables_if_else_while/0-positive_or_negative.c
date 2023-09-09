#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main entry of the program
 * This program will assign a random number to the variable n
 * The variable n will store a different value each time this program runs
 * The program prints whether the number stored in the variable n is (+) 0r (-)
 * Return: Always 0 (indicating successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
