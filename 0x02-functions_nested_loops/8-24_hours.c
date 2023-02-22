#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: returns minutes
 */

void jack_bauer(void)
{
	int day = 1440;
	int sum = 0;
	int i = 0;
	char c;

	while (day > sum)
	{
		i = 0;
		while (i <= 60)
		{
			i++;
		}

		sum += 1;
	}
	c = sum + '0';
	_putchar(c);
}
