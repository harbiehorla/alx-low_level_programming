#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints all possible combinations of a single-digit numbers.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
