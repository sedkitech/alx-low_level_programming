#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to int
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!index && !n)
		return (-1);
	*n = *n | (1 << index);
	return (1);

}
