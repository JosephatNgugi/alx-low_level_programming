#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Double pointer to the First node element
 * @n: Value to be initialized in the element
 *
 * Return: Address of the new element, NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}

	return (node);
}
