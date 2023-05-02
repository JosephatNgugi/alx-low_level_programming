#include "lists.h"

/**
 * get_nodeint_at_index - Finds the node at the nth position
 * of a listint_t linked list.
 * @head: Pointer to the first node element
 * @index: Integer value representing the nth element position
 *
 * Return: The nth node of th Linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	if (node == NULL)
		return (NULL);
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
