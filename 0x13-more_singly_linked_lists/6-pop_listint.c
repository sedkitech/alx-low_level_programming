#include "lists.h"

/**
 * pop_listint -  deletes the head node of a list
 * @head: pointer to node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	n = temp->n;
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
