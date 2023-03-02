#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings with n length
 *@dest: char
 *@src: char
 *@n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n; ++i)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
