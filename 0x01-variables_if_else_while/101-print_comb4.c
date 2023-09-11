#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Prints all possible different combination of three digits.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
	int x = 0;
	int y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);

					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}

