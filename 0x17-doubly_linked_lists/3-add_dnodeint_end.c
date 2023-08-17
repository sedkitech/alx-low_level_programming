#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function
 * @head: pointer to node
 * @n: integer
 * Description:  adds a new node at the end of a
 *
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = malloc(sizeof(dlistint_t));
	dlistint_t *node = *head;

	if (!tail)
		return (NULL);
	tail->next = NULL;
	tail->n = n;
	if (*head == NULL)
	{
		tail->prev = NULL;
		*head = tail;
		return (*head);
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = tail;
	tail->prev = node;
	node = tail;
	return (node);
}
