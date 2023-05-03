#include "lists.h"

/**
 * get_nodeint_at_index - Finds the node at the nth position
 * of a listint_t linked list.
 * @head: Pointer to the first node element
 * @index: Integer value representing the nth element position
 *
 * Return: The nth node of th Linked list,
 * NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);
}
