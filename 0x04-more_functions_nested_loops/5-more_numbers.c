#include "main.h"

/**
 * more_numbers -print numbers
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	char c[] = "01234567891011121314";

	for (i = 0; i <= 9; i++)
	{
		while (c[j] != '\0')
		{
			_putchar(c[j]);
			j++;
		}
		_putchar('\n');
		j = 0;
	}
}
