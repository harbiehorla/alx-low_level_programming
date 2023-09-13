#include "main.h"
#include <stdio.h>

/**
 * print_times_table - This prints time table of n
 *
 * @n: This takes number input
 *
 */

void print_times_table(int n)
{
	int num, multi, prod;

	if (n >= 0 && n <= 15)
	{
		num = 0;
		while (num <= n)
		{
			_putchar('0');

			multi = 1;
			while (multi <= n)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * multi;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				multi++;
				_putchar((prod % 10) + '0');
			}
			num++;
			_putchar('\n');
		}
	}
}
