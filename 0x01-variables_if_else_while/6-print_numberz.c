#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints all single digit numbers of base 10 starting from 0
 * A new line is printed afterwards.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
