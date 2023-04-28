#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: Pointer to the the first element in the list
 */
void free_list(list_t *head)
{
	list_t *node;

	node = head;
	while (node != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
