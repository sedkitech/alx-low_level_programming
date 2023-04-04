#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beg of a list
 * @head: pointer of pointer of struct
 * @n: data
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead = malloc(sizeof(listint_t));

	if (newHead)
	{
	newHead->n = n;
	newHead->next = *head;
	*head = newHead;
	return (*head);
	}
	else
		return (NULL);
}
