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
			if (n <= len_src)
				dest[len] = src[i];
			else
				dest[len] = ' ';
		len++;
		}
	dest[len] = '\0';
	return (dest);
}

