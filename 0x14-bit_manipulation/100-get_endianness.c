#include "main.h"
/**
 * get_endianness - checks for endianess
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int counter = 1;
	char *counterPtr = (char *)&counter;

	if (!*counterPtr)
		return (0);
	return (1);
}
