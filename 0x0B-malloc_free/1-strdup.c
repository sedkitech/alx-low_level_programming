#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer
 * @str: string
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *arr;

	if (str == NULL)
		return (NULL);

	arr = malloc(strlen(str) * sizeof(str[0]) + 1);
	if (!arr)
	{
		return (NULL);
	}

	strcpy(arr, str);
	return (arr);

}
