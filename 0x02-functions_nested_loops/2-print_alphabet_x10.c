#include "main.h"

/**
 * print_alphabet_x10 - Enty point
 * Description: printing alphabet 10 times
 *
 * Return 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j <= 9)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	j++
	}
}
