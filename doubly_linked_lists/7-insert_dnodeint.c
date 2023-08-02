#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to list.
 * @idx: index of inserting position.
 * @n: data for new node insertion.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *news = malloc(sizeof(dlistint_t)), *last = *h;

	if (news)
	{
		news->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				news->next = *h;
				(*h)->prev = news;
			}
			*h = news;
			return (news);
		}
		while (i < idx - 1 && last)
		{
			last = last->next;
			i++;
		}
		if (last)
		{
			if (last->next)
				last->next->prev = news;
			news->next = last->next;
			news->prev = last;
			last->next = news;
			return (news);
		}
	}
	return (NULL);
}
