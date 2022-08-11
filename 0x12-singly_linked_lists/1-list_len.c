#include "lists.h"
#include <stddef.h>

/**
 * list_len - a function that returns the number of elements in a linked list
 *
 * @h: singly linked list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
