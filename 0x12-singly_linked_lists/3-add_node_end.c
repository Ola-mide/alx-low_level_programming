#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end - a function that adds a new node at the end of a list
 *
 * @head: address to be added to
 *
 * @str: string to be added to address
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end;

	if (str == NULL)
	{
		return (NULL);
	}
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	list->str = strdup(str);
	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}
	list->len = strlen(list->str);
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		end = *head;
		while (end->next)
		{
			end = end->next;
		}
		end->next = list;
	}
	return (list);
}
