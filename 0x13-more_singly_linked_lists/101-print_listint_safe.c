#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *fastforward;
	size_t count;

	node = head;

	for (count = 0; node != NULL; count++)
	{
		printf("[%p] %d\n", (void *) node, node->n);
		node = node->next;
		if (node->next == fastforward)
		{
			printf("[%p] %d\n", (void *) node, node->n);
			exit(98);
		}
		fastforward = node;
	}

	return (count);
}
