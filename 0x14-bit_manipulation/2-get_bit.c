#include "main.h"
/**
 * get_bit - get a bit at a given index
 * @n: number
 * @index: index
 * Return: bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int count = 0;

	if (!n && !index)
		return (-1);
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	if (n == 0 && index == 0)
		return (n & 1);
	while (n)
	{
		if (count == index)
			bit = (n & 1);
		n = (n >> 1);
		count++;
	}
	return (bit);
}
