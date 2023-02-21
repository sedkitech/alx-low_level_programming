#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
