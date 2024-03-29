#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to a struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
