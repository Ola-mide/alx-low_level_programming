#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 *
 * @h: doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
