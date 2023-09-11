#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
