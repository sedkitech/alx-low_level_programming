#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: pointer to node
 * @index: index of the node that should be deleted
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		curr = NULL;
		return (1);
	}
		prev = *head;
		curr = (*head)->next;
		while (curr && count <= index)
		{
			if (count == index)
			{
				prev->next = curr->next;
				free(curr);
				curr = NULL;
				return (1);
			}
			count++;
			prev = curr;
			curr = curr->next;

		}
		return (-1);
}
