#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node != NULL)
	{
		dlistint_t *next = node->next;

		free(node);
		node = next;
	}
}
