#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: result of sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *last = head;

	while (last)
	{
		sum += last->n;
		last = last->next;
	}

	return (sum);
}
