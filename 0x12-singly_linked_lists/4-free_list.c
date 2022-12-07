#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list
 *
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
