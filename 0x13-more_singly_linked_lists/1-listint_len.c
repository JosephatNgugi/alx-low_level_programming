
#include "lists.h"

/**
 * listint_len - Computes the number of elements of a listint_t list.
 * @h: Pointer to the first node element of the list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
