#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the first element in the list
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *node;
	size_t count = 0;

	node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		count++;
		node = node->next;
	}

	return (count);
}
