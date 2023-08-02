#include "lists.h"

/**
 *add_dnodeint_end - add node at the end
 *@head: a pointer to the adrress of the head
 *@n: the integer for the new node
 *Return:the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *news;
	dlistint_t *last = NULL;

	news = malloc(sizeof(dlistint_t));

	if (news)
	{
		news->n = n;
		if (*head)
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = news;
			news->prev = last;
		}
		else
			*head = news;
	}

	return (news);
}
