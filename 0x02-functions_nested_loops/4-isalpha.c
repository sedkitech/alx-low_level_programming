#include "main.h"

/**
 * _isalpha - checks fro alphabetic character
 * @c: the character to check
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	int result;
	int i;
	int j;

	result = 0;

	for (i = 'a'; i <= 'z'; i++)
		if (c == i)
			result = 1;
	for (j = 'A'; j <= 'Z'; j++)
		if (c == j)
			result = 1;
	return (result);
}
