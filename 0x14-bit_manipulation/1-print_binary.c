#include "main.h"

/**
 * print_bits - prints the binary of a number
 * @n: number
 * Return: void
 */

void print_bits(unsigned long int n)
{
	if (n == 0)
		return;
	print_bits(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bits(n);
}
