#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and set the head to NULL
 * @head: Double pointer to the first element in a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	node = *head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
