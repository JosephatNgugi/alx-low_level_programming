#include "lists.h"

/**
 * sum_listint - Adds all the data(n) of a listint_t linked list.
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all (n) data, (0) if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
