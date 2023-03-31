#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to struct
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
