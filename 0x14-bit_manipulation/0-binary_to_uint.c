#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: pointer to string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int len = strlen(b) - 1;
	unsigned int sum = 0;
	unsigned int i = 1;

	if (!b)
		return (0);
	while (b[count])
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	for (; len >= 0; len--)
	{
		if (b[len] == '1')
			sum += i;
		i *= 2;
	}
	return (sum);

}
