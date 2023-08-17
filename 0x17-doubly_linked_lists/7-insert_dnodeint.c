#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h: pointer to node
 * @idx: index
 * @n: data
 * Description: inserts a new node at a given position
 *
 * Return: node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	unsigned int count = 0;
	dlistint_t *nodeAt = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!nodeAt)
		return (NULL);
	while (node)
	{
		if (count == idx)
		{
			if (node->next == NULL)
				return (add_dnodeint_end(h, n));
			nodeAt->n = n;
			nodeAt->next = node;
			nodeAt->prev = node->prev;
			node->prev = nodeAt;
			node->prev->next = nodeAt;
			return (nodeAt);
		}
		node = node->next;
		count++;
	}
	return (NULL);
}
