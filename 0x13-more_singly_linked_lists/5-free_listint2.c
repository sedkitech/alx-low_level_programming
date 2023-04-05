#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptrHead = *head;

	while (ptrHead)
	{
		listint_t *ptr = ptrHead;

		ptrHead = ptrHead->next;
		free(ptr);
	}
	*head = NULL;
}
