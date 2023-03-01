#include "main.h"
#include <string.h>

/**
 * puts_half -  prints half of a string
 *@str: string to print
 * Return always 0
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;

	while (i < len)
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}

