#include "main.h"

/**
 * _pow - calculate the power of a num
 * @base_value: int
 * @exponent_value: int
 * Return: pow
 */

int _pow(int base_value, int exponent_value)
{
	int i = 0;
	int sum = 1;

	for (; i < exponent_value; i++)
	{
		sum *= base_value;
	}
	return (sum);
}

/**
 * binary_to_uint - converts a binary num to int
 * @b: pointer to string
 * Return: converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1;
	unsigned int decimal = 0;
	int exponent = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '0')
			decimal += 0;
		else
			decimal += (_pow(2, exponent));

		exponent++;
		i--;
	}
	return (decimal);
}
