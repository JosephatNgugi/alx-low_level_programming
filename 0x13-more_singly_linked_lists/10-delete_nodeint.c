#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the index `index`
 * of a listint_t linked list
 * @head: Double pointer to the head node.
 * @index: The index position of the node to be deleted.
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current_node;

	current_node = *head;
	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL)
	{
		if (index == 0)
		{
			node->next = current_node->next;
			free(current_node);
			return (1);
		}
		node = current_node;
		current_node = current_node->next;
		index--;
	}

	return (-1);
}
