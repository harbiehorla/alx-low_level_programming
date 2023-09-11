#include <stdio.h>

/**
 * main - This is the entry point
 * Prints the alphabet in lowercase,the in uppercase, followed by a new line.
 *
 * Return: Always 0 (indicating successful)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

