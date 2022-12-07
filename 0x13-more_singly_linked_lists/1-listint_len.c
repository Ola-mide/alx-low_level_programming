#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 *
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
