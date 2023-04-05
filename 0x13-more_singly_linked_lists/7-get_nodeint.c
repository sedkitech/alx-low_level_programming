#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to node
 * @index: index of node
 * Return: the nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (ptr)
	{
		if (index == count)
			return (ptr);

		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
