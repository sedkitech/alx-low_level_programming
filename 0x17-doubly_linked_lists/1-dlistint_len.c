#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function
 * @h: pointer to node
 *
 * Description: returns the number of elements
 *
 * Return: number of elements in a linkedlist
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nb_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
