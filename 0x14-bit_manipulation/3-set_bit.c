#include "main.h"
/**
 * set_bit - sets a value of a bit at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!index && !n)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
