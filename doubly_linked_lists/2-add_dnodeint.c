#include "lists.h"

/**
 *add_dnodeint - add a new node at the beginning of a dlistint_t
 *@head: current place to a list
 *@n: int to add to the list
 *Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *news;

	news = malloc(sizeof(dlistint_t));

	if (news)
	{
		news->n = n:
	news->prev = NULL;
	news->next = *head;
	if (*head)
		(*head)->prev = news;
	*head = news;
	}

	return (news);
}
