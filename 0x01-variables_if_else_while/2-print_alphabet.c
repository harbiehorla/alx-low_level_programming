#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (indicating success)
 */

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

		putchar('\n');

	return (0);
}
