#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: return a pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (!i)
		exit (98);


	return (i);

}
