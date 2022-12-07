#include "lists.h"

/**
 * get_dnodeint_at_index - pointer to a function that returns the nth node
 * of a dlistint_t linked list
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: specified node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int j = 0;

	node = head;
	while (node)
	{
		if (j == index)
		{
			return (node);
		}
		j++;
		node = node->next;
	}
	return (NULL);
}
