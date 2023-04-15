#include "main.h"

/**
 * flip_bits - the number of bits to flip
 * @n: unsigned int
 * @m: unsigned int
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int isFlipped = 0;
	int counter = 0;

	while (counter < 64)
	{
		if ((n >> counter & 1) ^ (m >> counter & 1))
			isFlipped++;
		counter++;
	}
	return (isFlipped);
}
