#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the first element in a list node
 * @str: String to be initialized to the node element
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp_node;

	node = malloc(sizeof(size_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		temp_node = *head;
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = node;
	}

	return (node);
}
