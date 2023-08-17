#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function
 * @head: pointer to node
 * @n: data
 * Description: t adds a new node at the beginning of a list
 *
 * Return: adress of a node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead = malloc(sizeof(dlistint_t));

	if (!newHead)
		return (NULL);
	newHead->n = n;
	newHead->prev = NULL;
	newHead->next = *head;
	if (*head)
	{
		(*head)->prev = newHead;
	}
	*head = newHead;
	return (*head);
}
