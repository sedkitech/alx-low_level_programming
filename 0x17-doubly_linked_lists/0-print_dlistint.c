#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function
 * @h: pointer to node
 *
 * Description: prints all the elements of a list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nb_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
