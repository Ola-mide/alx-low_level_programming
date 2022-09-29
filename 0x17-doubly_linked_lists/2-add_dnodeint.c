#include "lists.h"

/**
 * add_dnodeint - pointer to function that adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: pointer to pointer to the head
 *
 * @n: int to be added
 *
 * Return: address of the new element or success if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			ptr->n = n;
			*head = ptr;
		}
		else
		{
			ptr->n = n;
			ptr->prev = NULL;
			ptr->next = *head;
			(*head)->prev = ptr;
			*head = ptr;
		}
		return (ptr);
	}
}
