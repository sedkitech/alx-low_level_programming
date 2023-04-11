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
	printf("%ld", n & 1);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("%ld", n);
	else
		print_bits(n);
}
