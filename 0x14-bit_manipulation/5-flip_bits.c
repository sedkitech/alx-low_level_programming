#include "main.h"
/**
 * flip_bits - flip bits to get a number
 * @n: number unsigned long int
 * @m: number of bits to change
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_it = 0;
	unsigned int count = 0;

	while (count < 64)
	{
		if ((m >> count & 1) ^ (n >> count & 1))
			flip_it++;
		count++;
	}
	return (flip_it);
}
