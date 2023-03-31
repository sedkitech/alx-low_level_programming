#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer to struct
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	unsigned int sum = 0;
	const list_t *node = h;

	while (node)
	{
		sum++;
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		node = node->next;
	}
	return (sum);
}
