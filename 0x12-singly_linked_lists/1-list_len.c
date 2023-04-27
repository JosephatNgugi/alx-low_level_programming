#include "lists.h"

/**
 * list_len - Counts the number of elements in a list_t list
 * @h: Pointer to the first node in a list
 *
 * Return: Number of elements in a list
 */
size_t list_len(const list_t *h)
{
	const list_t *node;
	size_t count = 0;

	node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
