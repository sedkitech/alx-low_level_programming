#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: length of an array
 */

void reverse_array(int *a, int n)
{
	int end = n - 1;
	int tmp;
	int start = 0;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
