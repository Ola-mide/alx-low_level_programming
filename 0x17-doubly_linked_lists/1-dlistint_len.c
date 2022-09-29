#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a list
 *
 * @h: doubly linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
