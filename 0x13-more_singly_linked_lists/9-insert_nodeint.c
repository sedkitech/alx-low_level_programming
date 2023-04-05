#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of pointer to node
 * @idx: index of the list
 * @n: int
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *nodeAdr;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	while (ptr)
	{
		if (count == idx)
		{
			ptr->next = node;
			node->next = ptr->next;
			node->n = n;
			nodeAdr = ptr;
		}
		count++;
		ptr = ptr->next;

	}
	if (nodeAdr)
		return (nodeAdr);
	else
		return (NULL);
}
