#include "main.h"

/**
 * _islower - Entry point
 * @c: character to see if islower
 *
 * Description: check for lower case character
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	int result;
	int i;

	result = '1';
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			result = '0';
	}
	return (result);
}
