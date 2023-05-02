#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Double pointer to the head node
 * @idx: Index of the list where the new node should be added,
 * @n: integer value to be initiazed to the node data.
 *
 * Return: The address of the new node, NULL if Failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	current_node = *head;
	if (idx == 0)
	{
		node->next = current_node;
		*head = node;
		return (node);
	}
	while (current_node != NULL && idx != 1)
	{
		current_node = current_node->next;
		idx--;
	}
	node->next = current_node->next;
	current_node->next = node;

	return (node);
}
