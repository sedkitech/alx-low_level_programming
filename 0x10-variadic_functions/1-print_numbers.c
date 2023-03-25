#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed bbetween numbers
 * @n: number of args
 * @...: args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
