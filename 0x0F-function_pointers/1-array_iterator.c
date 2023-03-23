#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function
 * @array: pointer
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
