#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char ch[] = "_putchar\n";
	int i;

	for (i = 0 ; i <= 8; i++)
	{
		_putchar(ch[i]);
	}

	return (0);
}
