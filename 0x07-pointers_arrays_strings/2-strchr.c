#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;
	int len = strlen(s) - 1;
	int start;
	char ch[] = "";

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			start = i;
			break;
		}
		else
			return (NULL);
	}
	for (i = start; i < len; i++)
	{
		ch[i] = s[i];
	}
	return (ch);
}
