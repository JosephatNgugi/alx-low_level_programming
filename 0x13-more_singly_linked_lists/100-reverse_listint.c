#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Double pointer to the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *prev_node = NULL;

	node = *head;
	
	if (node == NULL)
		return (NULL);

	if (node->next == NULL)
		return (node);

	while (node != NULL)
	{
		*head = node->next;
		node->next = prev_node;
		prev_node = node;

		node = *head;
	}

	*head = prev_node;

	return (*head);
}
