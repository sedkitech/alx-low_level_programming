#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: unsigned long int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
