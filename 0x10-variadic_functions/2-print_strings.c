#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of args
 * @...: args
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		if (value == NULL)
			printf("(nil)");
		printf("%s", value);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
