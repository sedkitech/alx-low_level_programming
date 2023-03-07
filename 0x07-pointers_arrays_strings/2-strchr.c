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
	int len = strlen(s);
	int start;
	int len_ch;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			start = i;
			len_ch = len - start;
			break;
		}
	}

	char ch[] = "";

	for (i = start; i <= len; i++)
	{
		ch[i] = s[i];
	}
	s = "";
	for (i = 0; i < len_ch; i++)
	{
		s[i] = ch[i];
	}

	return (ch);
}
