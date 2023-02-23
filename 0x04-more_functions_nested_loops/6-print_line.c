#include "main.h"

/**
 * print_line -print lines
 *@n: number of lines
 * Return: always 0
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
