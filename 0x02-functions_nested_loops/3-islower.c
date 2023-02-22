#include "main.h"

/**
 * _islower - Entry point
 * @c: int to see if islower
 *
 * Description: check for lower case character
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	int result;
	int i;

	result = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			result = 1;
	}
	return (result);
}
