#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 *
 * @head: pointer to pointer to a linked list
 *
 * @n: int
 *
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link = malloc(sizeof(n));

	if (link == NULL)
	{
		return (NULL);
	}
	link->n = n;
	link->next = *head;
	*head = link;
	return (link);
}
