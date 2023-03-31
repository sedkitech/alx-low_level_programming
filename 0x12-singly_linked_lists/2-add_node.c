#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * @head: head of linked list
 * @str: string
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	int len = strlen(str);

	if (newHead)
	{
		newHead->str = strdup(str);
		newHead->len = len;
		newHead->next = *head;
		return (newHead);
	}
	else
		return (NULL);
}
