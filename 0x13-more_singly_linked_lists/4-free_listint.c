#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to struct
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		head->n = 0;
		head = head->next;
	}
}
