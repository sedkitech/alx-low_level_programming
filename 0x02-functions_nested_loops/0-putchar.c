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

	while (ch[i])
	{
		putchar(ch[i]);
		i++;
	}

	return (0);
}
