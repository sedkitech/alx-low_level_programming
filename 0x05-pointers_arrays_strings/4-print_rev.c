#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = _strlen(*s);
	int j = i - 1;

	while (s[j] != 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');

}
