#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 * x ==row, y == column, z == digit of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x <= 9 ; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 0 ; y <= 9 ; y++)
		{
			z = (x * y);
			if ((z / 10) > 0)
			{
				_putchar((z / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
