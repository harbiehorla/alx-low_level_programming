#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Print all single digit numbers of base 10 starting from 0,
 * A new line should follow afterwards
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
