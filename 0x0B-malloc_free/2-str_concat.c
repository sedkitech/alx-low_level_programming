#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	arr = malloc(sizeof(s1) + sizeof(s2));
	if (!arr)
		return (NULL);

	strcat(arr, s1);
	strcat(arr, s2);
	arr[strlen(arr)] = '\0';
	return (arr);
}
