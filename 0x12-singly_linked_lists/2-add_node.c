#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - a function that adds a new node at the beginning of a list
 *
 * @head: address to be added to
 *
 * @str: string to be added to address
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

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
	list->next = *head;
	*head = list;
	return (list);
}
