#include "lists.h"

/**
 * pop_listint - Deletes the head of a node of a listint_t
 * linked list
 * @head: Double pointer First element of the list
 *
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	node = *head;
	if (node == NULL)
		return (0);

	n = node->n;
	*head = node->next;
	free(node);

	return (n);
}
