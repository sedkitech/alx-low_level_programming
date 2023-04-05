#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to struct
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptrHead = head;

	while (ptrHead)
	{
		listint_t *newP = ptrHead;

		ptrHead = ptrHead->next;
		free(newP);
	}
}
