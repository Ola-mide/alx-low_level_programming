#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data of a
 * dlistint_t linked list
 *
 * @head: pointer to head node
 *
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}		
