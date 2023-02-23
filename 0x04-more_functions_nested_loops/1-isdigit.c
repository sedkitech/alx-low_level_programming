#include "main.h"

/**
 * _isdigit - checks if its uppercase
 * @c: integer to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int result = 0;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			result = 1;
	}
	return (result);
}
