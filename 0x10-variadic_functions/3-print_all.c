#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: type of arguments passed
 * @...: arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *value;

	va_start(args, format);
	while (!format)
	{
		putchar('\n');
		return;
	}
	while (format[i] != '\0')
	{
	switch (format[i])
	{
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'c':
			printf("%c", (char) va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
		case 's':
			value = va_arg(args, char *);
			if (value == NULL)
				printf("(nil)");
			printf("%s", value);
			break;
		default:
			break;
	}
	if ((format[i] == 'i' || format[i] == 'c' || format[i] == 'f' ||
		format[i] == 's') && format[i + 1] != '\0')
		printf(", ");

	i++;
	}
	va_end(args);
	putchar('\n');
}
