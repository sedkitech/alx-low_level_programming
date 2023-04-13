#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: index
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int hint = 0;

	if (index == NULL && n == NULL)
		return (-1);

	if (index == 0)
		return (n & 1);
	if (n == 0 && index == 0)
		return (n & 1);

	while (n != 0)
	{
		if (hint > index)
		{
			hint = (-1);
			break;
		}
		if (index == hint)
		{
			hint = (n & 1);
			break;
		}
		(n = n >> 1);
		hint++;
	}
	return (hint);

}
