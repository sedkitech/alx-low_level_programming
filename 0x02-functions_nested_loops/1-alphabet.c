#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: a function that prints alphabet words
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
