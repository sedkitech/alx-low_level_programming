#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: pointer to node
 * @index: index of the node that should be deleted
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int res = -1;
	listint_t *prev = *head;
	listint_t *curr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		res = 1;
	}
	else
	{
		while (index != 0)
		{
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return (res);

}
