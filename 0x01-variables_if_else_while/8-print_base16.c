#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	int h = 0;

	while (h < 16)
	{
		if (h < 10)
		{
			putchar(h + '0');
		}
		else
		{
			putchar('a' + (h - 10));
		}
		h++;
	}

	putchar('\n');

	return (0);
}
