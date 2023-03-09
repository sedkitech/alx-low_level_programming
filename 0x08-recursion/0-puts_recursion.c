#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by new line
 * @s: string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		printf("\n");
		return;
	}
	printf("%c", s[0]);
	_puts_recursion(s + 1);
}
