#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: head of linked list
 * @str: string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newTail = malloc(sizeof(list_t));
	list_t *ptr;
	int len = strlen(str);

	if (newTail == NULL)
	{
		return (NULL);
	}
		newTail->str = strdup(str);
		newTail->len = len;
		newTail->next = NULL;

	if (strdup(str) == NULL)
	{
		free(newTail);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newTail;
		return (newTail);
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newTail;

		return (newTail);
	}
}
