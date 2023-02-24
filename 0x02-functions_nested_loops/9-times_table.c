#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = j * i;

			if (product >= 10)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if ((product <= 9) && (j != 0))
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (product <= 9)
				_putchar(product + '0');
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
