#include "main.h"
#include <string.h>

/**
 * puts2 -  prints every other character of a string
 *@str: string to print
 * Return always 0
 */

void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
