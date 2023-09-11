#include <stdio.h>

/**
 * main - Entry point of the program
 * Prints all the alphabet in lowercase, followed by a new line.
 * All alphabets are printed excluding q and e
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
		ch++;
	}
	putchar('\n');

	return (0);
}
