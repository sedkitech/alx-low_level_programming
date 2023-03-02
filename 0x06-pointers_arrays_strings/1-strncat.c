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
	int len_src = strlen(src);
	
	if (n <= len_src)
	{
		for (i = 0; i < n; ++i)
		{
		dest[len] = src[i];
		len++;
		}
	}
	else 
	{
		for (i = 0; i < len_src; ++i)
		{
			dest[len] = src[i];
			len++;
		}
	}
	dest[len] = '\0';
	return (dest);
}
