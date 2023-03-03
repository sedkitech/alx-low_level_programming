#include "main.h"
#include <string.h>

/**
 * string_toupper - change lowercase letters of a string to uppercase
 * @str: string
 * Return: always 0
 */

char *string_toupper(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97)
			str[i] = (str[i] - 32);
	}
	return (str);
}
