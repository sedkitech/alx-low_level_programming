#include "main.h"

/**
 * print_last_digit - printing the last digit of integer
 * @n: integer to print
 * Return: always 0
 */

int print_last_digit(int n)
{
	int last_int = n % 10;
	char c = last_int + '0';

	_putchar(c);
	return (last_int);
}
