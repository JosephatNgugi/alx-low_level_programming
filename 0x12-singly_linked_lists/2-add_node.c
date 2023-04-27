#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A double pointer to the first node element
 * @str: A String to be initialized to the element
 *
 *Return: The address of the new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
