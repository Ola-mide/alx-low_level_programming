#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: size of singly linked list
 */

size_t print_list(const list_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
