#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Double Pointer to the head node of the list.
 * @n: The value to stored in the node element.
 *
 * Return: The address of the new element, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
