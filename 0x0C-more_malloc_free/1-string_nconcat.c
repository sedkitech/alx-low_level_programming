#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: ponter or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		len = strlen(s2);
	len = n;

	arr = malloc(strlen(s1) + len + 1);
	if (!arr)
		return (NULL);

	strcat(arr, s1);
	strncat(arr, s2, len);
	arr[strlen(arr)] = '\0';
	return (arr);
}
