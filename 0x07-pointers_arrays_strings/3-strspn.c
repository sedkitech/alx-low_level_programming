#include "main.h"
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	int i;
	int j;
	int len_accept = strlen(accept);
	int len_s = strlen(s);

	for (i = 0 ; i < len_accept; i++)
	{
		for (j = 0; j < len_s; j++)
		{
			if (accept[i] == s[j])
			{
				sum++;
				break;
			}
		}
	}
	return (sum);
}
