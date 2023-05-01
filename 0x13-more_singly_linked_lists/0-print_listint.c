#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the first node element of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
