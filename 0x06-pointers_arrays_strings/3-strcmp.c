#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int i;
	int res;
	int len;

	if (len_s1 >= len_s2)
	{
		len = len_s1;
	}
	else
	{
		len = len_s2;
	}

	for (i = 0 ; i < len; i++)
	{
		if (s1[i] == s2[i])
		{
			res = 0;
		}
		else if (s1[i] > s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
