#include "lists.h"

/**
 * add_dnodeint_end - pointer to function that adds a new node at
 * the end of a dlistint_t list
 *
 * @head: pointer to pointer to the head
 *
 * @n: integer to be added
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}
	return (new_node);
}
