#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer for an array of int
 * @size: size of array
 * @cmp: function pointer of int
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index = 0;
	int result = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				index = i;
				break;
			}
			index = -1;
		}
	}

	return (index);
}
