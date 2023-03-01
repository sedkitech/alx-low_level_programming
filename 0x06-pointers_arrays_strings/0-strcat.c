#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *@dest: char
 *@src: char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
