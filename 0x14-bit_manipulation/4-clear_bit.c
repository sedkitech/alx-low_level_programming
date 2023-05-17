#include "main.h"
/**
 * clear_bit - clears a bit at index
 * @n: pointer to number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!index && !n)
		return (-1);
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
