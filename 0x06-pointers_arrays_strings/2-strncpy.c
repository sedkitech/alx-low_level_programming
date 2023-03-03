#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two strings with n length
 *@dest: char
 *@src: char
 *@n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;
	int len_src = strlen(src);

		for (i = 0; i < n; ++i)
		{
			if (i <= len_src)
				dest[i] = src[i];
			else
				dest[len] = '\0';
		len++;
		}
	dest[len] = '\0';
	return (dest);
}

