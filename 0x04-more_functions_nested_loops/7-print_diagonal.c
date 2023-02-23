#include "main.h"

/**
 * print_diagonal - draw diagonal line
 *@n: number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (j < n)
		{
			for (i = 0; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}
