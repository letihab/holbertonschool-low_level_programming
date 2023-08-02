#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *last = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*h = new;
		return (new);
	}

	for (i = 0; last && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = last->next;
			last->next = new;
			return (new);
		}
		else
			last = last->next;
	}

	return (NULL);
}
