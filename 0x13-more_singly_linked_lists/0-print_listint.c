#include "lists.h"

/**
 * print_listint - prints all elements of struct list
 * @h: pointer to struct list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
