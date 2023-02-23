#include "main.h"

/**
 * _isupper - checks if its uppercase
 * @c: integer to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int result = 0;
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			result = 1;
	}
	return (result);
}
