#include "main.h"

/**
 * get_endianness - checks the endianess
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int count = 1;
	char *ptr = (char *)&count;

	if (ptr[0] == 0)
		return (0);
	return (1);

}
